#ifndef BusCom_BusConfigurator_h
#define BusCom_BusConfigurator_h

namespace BusCom {
class BusTransceiver;
class CAN_Generator;
} /* End of namespace BusCom */

namespace BusCom {

class BusConfigurator {

 public:

    BusTransceiver *myBusTransceiver;

    /**
     * @element-type CAN_Generator
     */
    CAN_Generator *myCAN_Generator;
};

} /* End of namespace BusCom */

#endif // BusCom_BusConfigurator_h
