#ifndef DataStructure_Bus_h
#define DataStructure_Bus_h

#include <vector>

#include "DataStructure/BusSubscriber.h"
#include "DataStructure/BusNode.h"


namespace DataStructure {

class CGuard;
class BusNode;
class BusSubscriber;

class Bus {

 public:

    static Bus* getInstance();
    static CGuard g;
    BusSubscriber* busSub;

    std::vector<BusNode*> myBusNodes;

    static Bus* instance;

    virtual ~Bus(){}

 private:

    Bus();
    Bus(const Bus&);

};

Bus* Bus::instance = 0;

class CGuard
{
public:
	~CGuard()
	{
		if(NULL != Bus::instance)
		{
			delete Bus::instance;
			Bus::instance = NULL;
		}
	}
};

}

#endif
