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

   Parser::ConfigurationCreator cf("resource/modules/test.xml");
   Parser::Configuration* conf = cf.readConfig();

	GUI::GUIBuilder ads;
	ads.buildGUI(conf);
   //Bus init

   //Com package

   //GUI

	nana::exec();

}
/* Code Snippets
nana::size sizeBus(600,800);
busPicture = new nana::picture(*this);
busPicture->size(sizeBus);
busPicture->load(nana::paint::image("resource/Busleitung.png"));
busPicture->stretchable(1);
--
	drawer = new nana::drawing(*mainframe);

	drawer->draw([&](nana::paint::graphics& graph) {
		//graph.rectangle(true, nana::colors::black); // flush the backbuffer
		this->get_drawer_trigger().refresh(graph);
	});
*/
