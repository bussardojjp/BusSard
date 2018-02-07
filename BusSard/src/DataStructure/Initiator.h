#ifndef DataStructure_Initiator_h
#define DataStructure_Initiator_h

#include "Member.h"
#include "Source.h"
#include "Trigger.h"

namespace DataStructure {

class Initiator : public Member {

 public:

    /**
     * @element-type Member
     */
    Member *myMember;


    /**
     * @element-type Trigger
     */
    Trigger *myTrigger;

    /**
     * @element-type Source
     */
    Source* src;

};

} /* End of namespace DataStructure */

#endif // DataStructure_Initiator_h
