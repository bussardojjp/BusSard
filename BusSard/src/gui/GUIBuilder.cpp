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
	//mainFrame = new MainFrame(conf);
	//mainFrame->collocate();
	//mainFrame->show();
	using namespace nana;

		form fm;
		group grp(fm);

		grp.caption(L"Group Example");
		grp.move(rectangle{ 10, 10, 200, 100 });

		grp.div("<>");

		//Create a label and a spinbox which are children of the group
		label lb(grp);
		lb.caption("Angle:");

		//spinbox spbox(grp);
		//spbox.range(0.0, 359.0, 1.0);

		grp["angle"] << lb;
		//grp["angle_value"] << spbox;
		grp.collocate();

		fm.show();
		exec();
}


} /* namespace GUI */
