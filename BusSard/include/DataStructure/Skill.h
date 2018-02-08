#ifndef DataStructure_Skill_h
#define DataStructure_Skill_h

#include <vector>
#include <string>

#include "Actuator.h"
#include "Parameter.h"


namespace DataStructure {

class Skill {
private:

	std::string name;

public:

	std::string getName();

	Actuator* actuator;

	std::vector<Parameter*> myParameter;
};

}

#endif
