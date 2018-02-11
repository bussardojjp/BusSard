#include <iostream>

#include "gui/MenuBar.h"
#include "gui/ViewElement.h"

#include "nana/gui/widgets/button.hpp"


namespace GUI {

MenuBar::MenuBar(MainFrame* context) : ViewElement(context){}

void MenuBar::build(){

	//Elements
	btn_busConnect = new nana::button(*this, "Bus verbinden", true);
	btn_busRefresh = new nana::button(*this, "Bus aktualiesieren", true);
	btn_busDownload = new nana::button(*this, "Konfiguration herunterladen", true);
	btn_busUpload = new nana::button(*this, "Konfiguration hochladen", true);

	//Layout
	this->layout->div("<b1><b2><b3><b4>");
	(*layout)["b1"] << *btn_busConnect;
	(*layout)["b2"] << *btn_busRefresh;
	(*layout)["b3"] << *btn_busDownload;
	(*layout)["b4"] << *btn_busUpload;
	layout->collocate();

}

} /* End of namespace GUI */
