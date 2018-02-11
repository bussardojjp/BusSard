#ifndef GUI_MainFrame_h
#define GUI_MainFrame_h

#include "nana/gui/widgets/form.hpp"
#include "nana/gui/wvl.hpp"
#include "nana/gui/place.hpp"

#include "parser/Configuration.h"

namespace GUI {
class DetailView;
class BusView;
class MenuBar;
class Console;
} /* End of namespace GUI */

namespace GUI {

class MainFrame : public nana::form
{//: public DataStructure::BusSubscriber {
private:

	//nana::drawing* drawer;
	nana::place* layout;

	DetailView *detailView;
	BusView *busView;
	MenuBar *menuBar;
	Console *console;

	void buildGUI();

 public:
	MainFrame(Parser::Configuration* conf);
	virtual ~MainFrame();
    virtual void onBusUpdate();

	BusView* getBusView() const {
		return busView;
	}

	void setBusView(BusView* busView) {
		this->busView = busView;
	}

	Console* getConsole() const {
		return console;
	}

	void setConsole(Console* console) {
		this->console = console;
	}

	const DetailView* getDetailView() const {
		return detailView;
	}

	void setDetailView(DetailView* detailView) {
		this->detailView = detailView;
	}

	const MenuBar* getMenuBar() const {
		return menuBar;
	}

	void setMenuBar(MenuBar* menuBar) {
		this->menuBar = menuBar;
	}
};

} /* End of namespace GUI */

#endif // GUI_MainFrame_h
