#include <iostream>

#include "parser/Logger.h"
#include "parser/ConfigurationCreator.h"
#include "parser/Configuration.h"
#include "tinyXml/tinyxml2.h"

namespace Parser {

ConfigurationCreator::ConfigurationCreator(std::string path){
	appConfig = nullptr;
	this->path = path;
}

Configuration* ConfigurationCreator::readConfig(){
	appConfig = new Configuration();
	//Read configuration out of xml
	tinyxml2::XMLDocument xmlDoc;
	tinyxml2::XMLError eResult = xmlDoc.LoadFile("resource/config.xml");
	if (eResult != tinyxml2::XML_SUCCESS) {
		Parser::Logger::LOG(Parser::Logger::TYPE_ERROR, "File not found or corrupt");
		return appConfig;
	}

	tinyxml2::XMLNode * pRoot = xmlDoc.FirstChild();
	if(pRoot == nullptr){
		Parser::Logger::LOG(Parser::Logger::TYPE_ERROR, "Config File is empty ! Fall back to default values..");
		return appConfig;
	}


	//Read configuration elements
	tinyxml2::XMLElement * pElement;
	int value, error = 0;

	pElement = pRoot->FirstChildElement("resolutionX");
	if(pElement == nullptr || pElement->QueryIntText(&value) != tinyxml2::XML_SUCCESS){
		Parser::Logger::LOG(Parser::Logger::TYPE_ERROR, "Error while parsing config");
		error = 1;
	}else
		appConfig->setResolutionX(value);

	pElement = pRoot->FirstChildElement("resolutionY");
	if(pElement == nullptr || pElement->QueryIntText(&value) != tinyxml2::XML_SUCCESS){
		Parser::Logger::LOG(Parser::Logger::TYPE_ERROR, "Error while parsing config");
		error = 1;
	}else
		appConfig->setResolutionY(value);

	if(!error){
		Parser::Logger::LOG(Parser::Logger::TYPE_MESSAGE, "Config successfully parsed !");
	}else{
		Parser::Logger::LOG(Parser::Logger::TYPE_MESSAGE, "Error(s) ocurred during parsing, fall back to default values..");
	}

	return appConfig;
}

} /* End of namespace Parser */
