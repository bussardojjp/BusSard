/*
 * GUIBuilder.cpp
 *
 *  Created on: 09.02.2018
 *      Author: 90788
 */

#include <gui/GUIBuilder.h>
#include <gui/MainFrame.h>
#include <nana/gui/widgets/group.hpp>
#include <nana/gui/widgets/label.hpp>
#include <nana/gui/widgets/spinbox.hpp>

namespace GUI {

GUIBuilder::GUIBuilder() {
	mainFrame = nullptr;
	menuBar = nullptr;
}

GUIBuilder::~GUIBuilder() {
	delete menuBar;
	delete mainFrame;
}


void GUIBuilder::buildGUI(Parser::Configuration* conf)
{
	mainFrame = new MainFrame(conf);
	mainFrame->collocate();
	mainFrame->show();
}


} /* namespace GUI */
