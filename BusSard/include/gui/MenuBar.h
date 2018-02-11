#ifndef GUI_MenuBar_h
#define GUI_MenuBar_h

#include "gui/MainFrame.h"
#include "gui/ViewElement.h"
#include "nana/gui/widgets/picture.hpp"
#include "nana/gui/widgets/button.hpp"
#include "nana/gui/widgets/group.hpp"
#include "nana/gui/wvl.hpp"

namespace GUI {
class MainFrame;
} /* End of namespace GUI */

namespace GUI {

class MenuBar : public ViewElement {
private:
	nana::picture* busPicture;
	nana::button* btn_busConnect;
	nana::drawing* draw;

public:
	 MenuBar(MainFrame* context);
	 virtual void build() override;

	 nana::picture* getBusPicture();
};

} /* End of namespace GUI */

#endif // GUI_MenuBar_h
