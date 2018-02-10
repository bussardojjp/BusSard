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

#include "parser/Configuration.h"
#include "gui/MenuBar.h"

namespace GUI {

class GUIBuilder {
private:
	MainFrame* mainFrame;
	MenuBar* menuBar;

public:
	GUIBuilder();
	virtual ~GUIBuilder();
	void buildGUI(Parser::Configuration* conf);
};

} /* namespace GUI */

#endif /* GUI_GUIBUILDER_H_ */
