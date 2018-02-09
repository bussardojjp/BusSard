#ifndef DataStructure_Member_h
#define DataStructure_Member_h

#include <vector>
#include <string>

#include "DataStructure/BusNode.h"
#include "DataStructure/Rules.h"


namespace DataStructure {

class BusNode;

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
