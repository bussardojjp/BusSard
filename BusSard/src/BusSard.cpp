//============================================================================
// Name        : BusSard.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <parser/ConfigurationCreator.h>

int main()
{
   Parser::ConfigurationCreator cf("resource/modules/test.xml");
   cf.readConfig();
}
