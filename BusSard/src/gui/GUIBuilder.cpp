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

namespace GUI {

GUIBuilder::GUIBuilder() {
	// TODO Auto-generated constructor stub

}

GUIBuilder::~GUIBuilder() {
	// TODO Auto-generated destructor stub
}

void GUIBuilder::buildGUI()
{
	using namespace nana;
	form mainWindow(API::make_center(800,600));
	size sizeBus(50,50);
	picture picBusUnin(mainWindow);
	picBusUnin.stretchable(1);
	place placeBusUnin(mainWindow);
	placeBusUnin.div("picBusUnin");
	placeBusUnin["picBusUnin"] << picBusUnin;
	picBusUnin.size(sizeBus);
	picBusUnin.load(paint::image("resource/Busleitung.png"));
	mainWindow.show();

	exec();
}

} /* namespace GUI */
