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

	nana::size sizeBus(600,800);
	busPicture = new nana::picture(*this);
	busPicture->size(sizeBus);
	busPicture->load(nana::paint::image("resource/Busleitung.png"));
	busPicture->stretchable(1);
	busPicture->move(nana::rectangle{ 500, 0, 800, 600 });

	btn_busConnect = new nana::button(*this, "Bus verbinden", true);
	btn_busConnect->move(nana::rectangle{ 10, 10, 200, 100 });

}

nana::picture* MenuBar::getBusPicture(){
	return busPicture;
}

} /* End of namespace GUI */
