#ifndef DataStructure_Trigger_h
#define DataStructure_Trigger_h

#include <string>

#include "Source.h"


namespace DataStructure {

class Source;

class Trigger {
private:

	std::string name;
	int id;

public:

	std::string getName();
	int getID();
    Source *mySource;

};

}

#endif
