#ifndef GUI_MenuBar_h
#define GUI_MenuBar_h

#include "gui/MainFrame.h"
#include "gui/ViewElement.h"

#include "nana/gui/widgets/button.hpp"

namespace GUI {
class MainFrame;
} /* End of namespace GUI */

namespace GUI {

class MenuBar : public ViewElement {
private:

	nana::button* btn_busConnect;
	nana::button* btn_busRefresh;
	nana::button* btn_busDownload;
	nana::button* btn_busUpload;

public:
	 MenuBar(MainFrame* context);
	 virtual void build() override;

};

} /* End of namespace GUI */

#endif // GUI_MenuBar_h
