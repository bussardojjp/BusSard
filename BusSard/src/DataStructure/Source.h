#ifndef DataStructure_Source_h
#define DataStructure_Source_h

#include <vector>

#include "Initiator.h"
#include "Trigger.h"

namespace DataStructure {

class Source {

 public:

    /**
     * @element-type Initiator
     */
    Initiator* initiator;

    /**
     * @element-type Trigger
     */
    std::vector<Trigger*> myTrigger;

};

} /* End of namespace DataStructure */

#endif // DataStructure_Source_h
