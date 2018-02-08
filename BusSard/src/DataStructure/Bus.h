#ifndef DataStructure_Bus_h
#define DataStructure_Bus_h

#include <vector>

#include "BusSubscriber.h"
#include "BusNode.h"


namespace DataStructure {

class CGuard;

class Bus {

 public:

    static Bus* getInstance();
    static CGuard g;
    BusSubscriber* busSub;

    std::vector<BusNode*> myBusNodes;

 private:

    static Bus* instance;
    Bus();
    Bus(const Bus&);
    ~Bus (){}

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
