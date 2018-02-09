#ifndef DataStructure_Bus_h
#define DataStructure_Bus_h

#include <vector>

//#include "DataStructure/BusSubscriber.h"
//#include "DataStructure/BusNode.h"


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


class CGuard
{
public:
	~CGuard()
	{
		if(Bus::instance != nullptr)
		{
			delete Bus::instance;
			Bus::instance = nullptr;
		}
	}
};

}

#endif
