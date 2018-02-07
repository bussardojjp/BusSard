#ifndef DataStructure_Actuator_h
#define DataStructure_Actuator_h

#include <vector>

#include "Member.h"
#include "Skill.h"

namespace DataStructure {

class Actuator : public Member {

 public:

    /**
     * @element-type Member
     */
    Member *myMember;

    /**
     * @element-type Skill
     */
   // std::vector<Skill*> skills;
};

} /* End of namespace DataStructure */

#endif // DataStructure_Actuator_h
