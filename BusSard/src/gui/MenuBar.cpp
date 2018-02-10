#include "gui/MenuBar.h"
#include "gui/ViewElement.h"
#include "nana/gui/widgets/picture.hpp"
#include "nana/gui/place.hpp"

namespace GUI {

MenuBar::MenuBar(MainFrame* context) : ViewElement(context){

	nana::size sizeBus(600,800);
	nana::picture picBusUnin(*this);
	picBusUnin.size(sizeBus);
	picBusUnin.load(nana::paint::image("resource/Busleitung.png"));
	picBusUnin.stretchable(1);

	nana::place layout(*this);
	layout.div("<oben><unten>");
	layout["oben"] << picBusUnin;

}


} /* End of namespace GUI */
