#ifndef DataStructure_BusNode_h
#define DataStructure_BusNode_h

#include <vector>
#include <string>

#include "DataStructure/Bus.h"
#include "DataStructure/Member.h"


namespace DataStructure {

class Member;
class Rules;
class Bus;

class BusNode {

private:

	std::string name;

	int identifier;

	//Icon

public:

	std::string getName();

    Bus *myBus;

    std::vector<Member*> myMembers;

    std::vector<Rules*> myRules;
};

}

#endif
