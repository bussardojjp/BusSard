/*
 * XMLTest.cpp
 *
 *  Created on: 09.02.2018
 *      Author: 90759
 */

#include <iostream>

#include "test/XMLTest.h"
#include "tinyXml/tinyxml2.h"


XMLTest::XMLTest() {

	std::cout << "TEST" << std::endl;

	using namespace tinyxml2;
	XMLDocument xmlDoc;
	XMLError eResult = xmlDoc.LoadFile("resource/modules/test.xml");
	if (eResult != XML_SUCCESS) {
		printf("Error: %i\n", eResult);
		return;
	}

	XMLNode * pRoot = xmlDoc.FirstChild();
	XMLElement * pElement = pRoot->FirstChildElement("Hello");

	int iOutInt;
	eResult = pElement->QueryIntText(&iOutInt);
	std::cout << iOutInt << std::endl;

}

XMLTest::~XMLTest() {
	// TODO Auto-generated destructor stub
}

