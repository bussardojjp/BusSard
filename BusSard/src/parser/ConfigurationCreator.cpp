#include <iostream>

#include "parser/Logger.h"
#include "parser/ConfigurationCreator.h"
#include "parser/Configuration.h"
#include "tinyXml/tinyxml2.h"

namespace Parser {

ConfigurationCreator::ConfigurationCreator(std::string path){
	appConfig = nullptr;
}

Configuration* ConfigurationCreator::readConfig(){
	appConfig = new Configuration();

	//Read configuration out of xml
		tinyxml2::XMLDocument xmlDoc;
		tinyxml2::XMLError eResult = xmlDoc.LoadFile("resource/modules/test2.xml");
		if (eResult != tinyxml2::XML_SUCCESS) {
			Parser::Logger::LOG(Parser::Logger::TYPE_ERROR, "File not found or corrupt");
			return nullptr;
		}

		tinyxml2::XMLNode * pRoot = xmlDoc.FirstChild();
		tinyxml2::XMLElement * pElement = pRoot->FirstChildElement("Hello");

		int iOutInt;
		eResult = pElement->QueryIntText(&iOutInt);
		std::cout << iOutInt << std::endl;


	return appConfig;
}

} /* End of namespace Parser */
