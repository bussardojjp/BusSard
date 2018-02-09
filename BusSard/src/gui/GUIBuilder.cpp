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
	MainFrame mainWindow(conf);
	place myPlace(mainWindow);

	panel<false> w(mainWindow);
	place subPlace(w);

	size sizeBus(600,800);
	//MainFrame sideWindow(conf);
	picture picBusUnin(mainWindow);

	picBusUnin.stretchable(1);



	myPlace.div("vert<birne><bus>");
	myPlace["birne"] << w;

	subPlace.div("<oben><unten>");
	//subPlace["oben"] << picBusUnin;

	picBusUnin.size(sizeBus);

	picBusUnin.load(paint::image("resource/Busleitung.png"));
	mainWindow.show();

	exec();
}

} /* namespace GUI */
