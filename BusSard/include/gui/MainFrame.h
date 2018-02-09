#ifndef GUI_MainFrame_h
#define GUI_MainFrame_h

#include "nana/gui/widgets/form.hpp"
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

 public:

    virtual void onBusUpdate();

 public:

    MainFrame(Parser::Configuration* conf);
    /**
     * @element-type BusSubscriber
     */
   // DataStructure::BusSubscriber *myBusSubscriber;

    DetailView *myDetailView;

    BusView *myBusView;

    MenuBar *myMenuBar;

    Console *myConsole;
};

} /* End of namespace GUI */

#endif // GUI_MainFrame_h
