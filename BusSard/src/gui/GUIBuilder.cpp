/*
 * GUIBuilder.cpp
 *
 *  Created on: 09.02.2018
 *      Author: 90788
 */

#include "gui/GUIBuilder.h"
#include "nana/gui/wvl.hpp"
#include "nana/gui/widgets/picture.hpp"
#include "nana/gui/place.hpp"
#include "nana/gui/widgets/panel.hpp"
#include "gui/MainFrame.h"

namespace GUI {

GUIBuilder::GUIBuilder() {
	// TODO Auto-generated constructor stub

}

GUIBuilder::~GUIBuilder() {
	// TODO Auto-generated destructor stub
}

void GUIBuilder::buildGUI(Parser::Configuration* conf)
{
	using namespace nana;
	mainFrame = new MainFrame(conf);

	//panel<true> p;
	//p.create(mainFrame);

	//size sizeBus(600,800);
	//MainFrame sideWindow(conf);
	/*
	picture picBusUnin(p);
	picBusUnin.size(sizeBus);
	picBusUnin.load(paint::image("resource/Busleitung.png"));
	picBusUnin.stretchable(1);

	picture picBusUnin2(p);
	picBusUnin2.size(sizeBus);
	picBusUnin2.load(paint::image("resource/Busleitung.png"));
	picBusUnin2.stretchable(1);
*/
	menuBar = new MenuBar(mainFrame);

	//Root Layout
	place myPlace(*mainFrame);
	myPlace.div("vert<birne><bus>");
	myPlace["birne"] << *menuBar;

	//subPlace["oben"] << picBusUnin;

	//subPlace.div("<oben><unten>");
	//subPlace["oben"] << picBusUnin;


	mainFrame->show();

	exec();
}

} /* namespace GUI */
