#ifndef DataStructure_Skill_h
#define DataStructure_Skill_h

#include <vector>
#include <string>

#include "DataStructure/Parameter.h"


namespace DataStructure {

class Skill {
private:

	std::string name;

public:

	std::string getName();

	std::vector<Parameter*> myParameter;
};

}

#endif
