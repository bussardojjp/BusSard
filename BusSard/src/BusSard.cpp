//============================================================================
// Name        : BusSard.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <nana/gui/wvl.hpp>
#include <nana/gui/widgets/label.hpp>
#include "gui/GUIBuilder.h"

#include <parser/ConfigurationCreator.h>

int main()
{

   //Parser::ConfigurationCreator cf("resource/modules/test.xml");
   //Parser::Configuration* conf = cf.readConfig();
	GUI::GUIBuilder ads;
	ads.buildGUI(nullptr);
   //Bus init

   //Com package

   //GUI

}
