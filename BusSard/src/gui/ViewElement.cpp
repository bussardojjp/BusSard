/*
 * ViewElement.cpp
 *
 *  Created on: 10.02.2018
 *      Author: Oliver
 */
#include "gui/ViewElement.h"
#include "nana/gui/widgets/group.hpp"
#include "nana/gui/place.hpp"

namespace GUI{
	ViewElement::ViewElement(MainFrame* context){
		this->context = context;
		create(*context, true);
		this->layout = new nana::place(*this);
	}

	ViewElement::~ViewElement() {
		delete layout;
	}
}
