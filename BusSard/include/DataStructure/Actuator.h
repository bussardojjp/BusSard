#ifndef DataStructure_Actuator_h
#define DataStructure_Actuator_h

#include <vector>

#include "Member.h"
#include "Skill.h"

namespace DataStructure {

class Actuator : public Member {

 public:

    std::vector<Skill*> skills;
};

}
#endif
