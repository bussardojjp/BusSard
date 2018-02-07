#ifndef DataStructure_Skill_h
#define DataStructure_Skill_h

#include <vector>

#include "Actuator.h"

namespace DataStructure {
class Actuator;
class Parameter;
} /* End of namespace DataStructure */

namespace DataStructure {

class Skill {

 public:

    /**
     * @element-type Actuator
     */
    Actuator* actuator;

    /**
     * @element-type Parameter
     */
    std::vector<Parameter*> myParameter;
};

} /* End of namespace DataStructure */

#endif // DataStructure_Skill_h
