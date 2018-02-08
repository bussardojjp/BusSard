#ifndef DataStructure_Initiator_h
#define DataStructure_Initiator_h

#include "Member.h"
#include "Source.h"
#include "Trigger.h"
#include <vector>

namespace DataStructure {

class Initiator : public Member {

 public:


    std::vector<Source*> src;

};

}

#endif
