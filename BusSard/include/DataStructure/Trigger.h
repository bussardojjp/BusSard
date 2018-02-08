#ifndef DataStructure_Trigger_h
#define DataStructure_Trigger_h

#include "Source.h"


namespace DataStructure {

class Trigger {
private:

	std::string name;
	int id;

public:

	std::string getName();
	int getName();
    Source *mySource;

};

}

#endif
