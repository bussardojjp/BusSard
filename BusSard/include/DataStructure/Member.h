#ifndef DataStructure_Member_h
#define DataStructure_Member_h

#include <vector>
#include <string>

#include "BusNode.h"
#include "Initiator.h"
#include "Actuator.h"
#include "Rules.h"


namespace DataStructure {

class Member {

private:

	int subId;
	std::string name;
	std::string description;

	// Iconadress


public:


    BusNode *myBusNode;
};

}
#endif
