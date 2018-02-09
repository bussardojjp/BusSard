#ifndef DataStructure_BusSubscriber_h
#define DataStructure_BusSubscriber_h

#include "DataStructure/Bus.h"
#include "GUI/MainFrame.h"


namespace DataStructure {

class BusSubscriber {

 public:

    virtual void onBusUpdate() = 0;
    virtual ~BusSubscriber() {}

};

}

#endif
