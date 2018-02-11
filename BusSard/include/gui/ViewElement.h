/*
 * ViewElement.h
 *
 *  Created on: 10.02.2018
 *      Author: Oliver
 */

#ifndef GUI_VIEWELEMENT_H_
#define GUI_VIEWELEMENT_H_

#include "gui/MainFrame.h"
#include "nana/gui/widgets/group.hpp"
#include "nana/gui/wvl.hpp"

namespace GUI{

	class MainFrame;

	class ViewElement : public nana::group{

	protected:
		MainFrame* context;

	public:
		ViewElement(MainFrame* context);
		virtual ~ViewElement();
		virtual void build() = 0;
	};

}
#endif /* GUI_VIEWELEMENT_H_ */
