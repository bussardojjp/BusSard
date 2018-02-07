#ifndef DataStructure_BusNode_h
#define DataStructure_BusNode_h

#include <vector>


namespace DataStructure {
class Bus;
class Member;
} /* End of namespace DataStructure */

namespace DataStructure {

class BusNode {

 public:

    /**
     * @element-type Bus
     */
    Bus *myBus;

    /**
     * @element-type Member
     */
    std::vector<Member*> myMembers;
};

} /* End of namespace DataStructure */

#endif // DataStructure_BusNode_h
