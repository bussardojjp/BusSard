/*
 * ViewElement.h
 *
 *  Created on: 10.02.2018
 *      Author: Oliver
 */

#ifndef GUI_VIEWELEMENT_H_
#define GUI_VIEWELEMENT_H_

#include "gui/MainFrame.h"
#include "nana/gui/widgets/panel.hpp"

namespace GUI{

	class MainFrame;

	class ViewElement : public nana::panel<true>{
	protected:
		MainFrame* context;
	public:
		ViewElement(MainFrame* context);
		virtual ~ViewElement();
	};

}
#endif /* GUI_VIEWELEMENT_H_ */
