#ifndef DataStructure_BusSubscriber_h
#define DataStructure_BusSubscriber_h

#include "Bus.h"
#include "GUI/MainFrame.h"


namespace DataStructure {

class BusSubscriber {

 public:

    virtual void onBusUpdate()  = 0;
    virtual ~BusSubscriber() {}

 public:

    Bus* bus;

};

}

#endif
