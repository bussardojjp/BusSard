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
	tinyxml2::XMLError eResult = xmlDoc.LoadFile(path.c_str());
	if (eResult != tinyxml2::XML_SUCCESS) {
		Parser::Logger::LOG(Parser::Logger::TYPE_ERROR, "File not found or corrupt");
		return nullptr;
	}

	tinyxml2::XMLNode * pRoot = xmlDoc.FirstChild();
	tinyxml2::XMLElement * pElement;
	int value;

	//Configuration elements
	pElement = pRoot->FirstChildElement("resolutionX");
	if(pElement->QueryIntText(&value) != tinyxml2::XML_SUCCESS) Parser::Logger::LOG(Parser::Logger::TYPE_ERROR, "Error while parsing config");
	appConfig->setResolutionX(value);

	pElement = pRoot->FirstChildElement("resolutionY");
	if(pElement->QueryIntText(&value) != tinyxml2::XML_SUCCESS) Parser::Logger::LOG(Parser::Logger::TYPE_ERROR, "Error while parsing config");
	appConfig->setResolutionY(value);

	return appConfig;
}

} /* End of namespace Parser */
