#ifndef DataStructure_Member_h
#define DataStructure_Member_h

#include <vector>

#include "BusNode.h"

namespace DataStructure {
class BusNode;
class Initiator;
class Actuator;
class Rules;
} /* End of namespace DataStructure */

namespace DataStructure {

class Member {

 public:

    /**
     * @element-type Initiator
     */
    Initiator *myInitiator;


    /**
     * @element-type Actuator
     */
    Actuator *myActuator;

    BusNode bn;

    /**
     * @element-type Rules
     */
    std::vector<Rules*> myRules;

    BusNode *myBusNode;
};

} /* End of namespace DataStructure */

#endif // DataStructure_Member_h
