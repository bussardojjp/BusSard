#include "GUI/MainFrame.h"
#include "GUI/DetailView.h"
#include "GUI/BusView.h"
#include "GUI/MenuBar.h"
#include "GUI/Console.h"

#include "nana/gui/place.hpp"
#include "nana/gui/wvl.hpp"

namespace GUI {

MainFrame::MainFrame(Parser::Configuration* conf){
	buildGUI();
	move(-10, 0);
	nana::size s(conf->getResolutionX(), conf->getResolutionY());
	size(s);
}

MainFrame::~MainFrame(){
	delete layout;
}

void MainFrame::buildGUI(){

	this->menuBar = new MenuBar(this);
	this->menuBar->build();

	this->test = new MenuBar(this);
	this->test->build();

	//Root Layout
	layout = new nana::place(*this);
	layout->div("vert< weight=50 menu ><bus>");
	(*layout)["bus"] << *menuBar;
	(*layout)["menu"] << *test;

	//Not yet implemented
	this->busView = nullptr;
	this->detailView = nullptr;
	this->console = nullptr;

}

void MainFrame::onBusUpdate(){

}

} /* End of namespace GUI */
