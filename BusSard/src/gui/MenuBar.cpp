#include <iostream>

#include "gui/MenuBar.h"
#include "gui/ViewElement.h"
#include "nana/gui/widgets/picture.hpp"
#include "nana/gui/widgets/button.hpp"
#include "nana/gui/widgets/group.hpp"
#include "nana/gui/wvl.hpp"


namespace GUI {

MenuBar::MenuBar(MainFrame* context) : ViewElement(context){

}

void MenuBar::build(){
/*
	nana::size sizeBus(600,800);
	busPicture = new nana::picture(*this);
	busPicture->size(sizeBus);
	busPicture->load(nana::paint::image("resource/Busleitung.png"));
	busPicture->stretchable(1);
*/
	btn_busConnect = new nana::button(*this, "Bus verbinden", true);


	div("<left><right>");
	//(*layout)["right"] << *busPicture;
	(*this)["left"] << *btn_busConnect;

	//draw = new nana::drawing(*this);
/*
	draw->draw([&](nana::paint::graphics& graph) {
		graph.rectangle(true, nana::colors::black); // flush the backbuffer
		//btn_busConnect
	});
*/
	collocate();
}

nana::picture* MenuBar::getBusPicture(){
	return busPicture;
}

} /* End of namespace GUI */
