/*
 * GUIBuilder.h
 *
 *  Created on: 09.02.2018
 *      Author: 90788
 */

#ifndef GUI_GUIBUILDER_H_
#define GUI_GUIBUILDER_H_

#include "nana/gui/wvl.hpp"
#include "nana/gui/widgets/picture.hpp"
#include "nana/gui/place.hpp"

namespace GUI {

class GUIBuilder {
public:
	GUIBuilder();
	virtual ~GUIBuilder();
	void buildGUI();
};

} /* namespace GUI */

#endif /* GUI_GUIBUILDER_H_ */
