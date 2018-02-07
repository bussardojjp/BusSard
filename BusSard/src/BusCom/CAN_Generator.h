#ifndef BusCom_CAN_Generator_h
#define BusCom_CAN_Generator_h

namespace BusCom {
class BusTransceiver;
class BusConfigurator;
} /* End of namespace BusCom */

namespace BusCom {

class CAN_Generator {

 public:

    /**
     * @element-type BusTransceiver
     */
    BusTransceiver *myBusTransceiver;

    /**
     * @element-type BusConfigurator
     */
    BusConfigurator *myBusConfigurator;
};

} /* End of namespace BusCom */

#endif // BusCom_CAN_Generator_h
