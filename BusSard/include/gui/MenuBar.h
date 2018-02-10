#ifndef GUI_MenuBar_h
#define GUI_MenuBar_h

#include "gui/MainFrame.h"
#include "gui/ViewElement.h"

namespace GUI {
class MainFrame;
} /* End of namespace GUI */

namespace GUI {

class MenuBar : public ViewElement {

public:
	 MenuBar(MainFrame* context);

};

} /* End of namespace GUI */

#endif // GUI_MenuBar_h
