#ifndef DataStructure_Source_h
#define DataStructure_Source_h

#include <vector>
#include <string>

#include "Member.h"
#include "Trigger.h"

namespace DataStructure {

class Source {

private:

	std::string name;

 public:

	std::string getName();

    Member* myMember;


    std::vector<Trigger*> myTrigger;

};

}

#endif
