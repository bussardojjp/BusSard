//============================================================================
// Name        : BusSard.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <nana/gui/wvl.hpp>
#include <nana/gui/widgets/label.hpp>
#include "gui/GUIBuilder.h";

int main()
{
	using namespace nana;
	GUI::GUIBuilder guiBuilder;
	guiBuilder.buildGUI();
    /*form    fm;
    label   lb(fm, rectangle(fm.size()));
    lb.caption("Hello, World");
    fm.show();
    exec();*/
}
