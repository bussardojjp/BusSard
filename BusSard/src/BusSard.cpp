//============================================================================
// Name        : BusSard.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

<<<<<<< HEAD
#include <nana/gui/wvl.hpp>
#include <nana/gui/widgets/label.hpp>
#include "gui/GUIBuilder.h";
=======
#include <parser/ConfigurationCreator.h>
>>>>>>> branch 'master' of https://github.com/bussardojjp/BusSard

int main()
{
<<<<<<< HEAD
	using namespace nana;
	GUI::GUIBuilder guiBuilder;
	guiBuilder.buildGUI();
    /*form    fm;
    label   lb(fm, rectangle(fm.size()));
    lb.caption("Hello, World");
    fm.show();
    exec();*/
=======
   Parser::ConfigurationCreator cf("resource/modules/test.xml");
   cf.readConfig();
>>>>>>> branch 'master' of https://github.com/bussardojjp/BusSard
}
