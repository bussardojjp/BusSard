#ifndef BusCom_BusTransceiver_h
#define BusCom_BusTransceiver_h

namespace BusCom {
class BusScanner;
class BusConfigurator;
class CAN_Generator;
class BusUpdater;
} /* End of namespace BusCom */

namespace BusCom {

class BusTransceiver {

 public:

    BusScanner *myBusScanner;

    BusConfigurator *myBusConfigurator;

    /**
     * @element-type CAN_Generator
     */
    CAN_Generator *myCAN_Generator;

    BusUpdater *myBusUpdater;
};

} /* End of namespace BusCom */

#endif // BusCom_BusTransceiver_h
