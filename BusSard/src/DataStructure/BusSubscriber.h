#ifndef DataStructure_BusSubscriber_h
#define DataStructure_BusSubscriber_h

#include "Bus.h"

namespace DataStructure {
class Bus;
} /* End of namespace DataStructure */
namespace GUI {
class MainFrame;
} /* End of namespace GUI */

namespace DataStructure {

class BusSubscriber {

 public:

    virtual void onBusUpdate()  = 0;

 public:

    /**
     * @element-type Bus
     */
    Bus* bus;

    /**
     * @element-type MainFrame
     */
    GUI::MainFrame *myMainFrame;
};

} /* End of namespace DataStructure */

#endif // DataStructure_BusSubscriber_h
