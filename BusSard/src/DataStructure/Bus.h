#ifndef DataStructure_Bus_h
#define DataStructure_Bus_h

#include <vector>

#include "Bus.h"

namespace DataStructure {
	class BusSubscriber;
	class BusNode;
} /* End of namespace DataStructure */

namespace DataStructure {

class Bus {

 public:

    static Bus* getInstance();


 private:
    static Bus instance;

 public:

    /**
     * @element-type BusSubscriber
     */
    BusSubscriber* busSub;

    /**
     * @element-type BusNode
     */
    std::vector<BusNode*> myBusNodes;
};

} /* End of namespace DataStructure */

#endif // DataStructure_Bus_h
