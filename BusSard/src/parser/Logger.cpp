/*
 * Logger.cpp
 *
 *  Created on: 09.02.2018
 *      Author: 90759
 */

#include <string>
#include <iostream>

#include "parser/Logger.h"

namespace Parser{

Logger::Logger() {
	// TODO Auto-generated constructor stub

}

Logger::~Logger() {
	// TODO Auto-generated destructor stub
}

void Logger::LOG(int type, std::string message){

	//Default print
	if(type == TYPE_ERROR){
		std::cout << "ERROR: " << message << std::endl;
	}
	if(type == TYPE_MESSAGE){
		std::cout << "MESSAGE: " << message << std::endl;
	}
	if(type == TYPE_DEBUG){
		std::cout << "DEBUG: " << message << std::endl;
	}

}


int Logger::TYPE_ERROR = 2;
int Logger::TYPE_MESSAGE = 1;
int Logger::TYPE_DEBUG = 0;

}
