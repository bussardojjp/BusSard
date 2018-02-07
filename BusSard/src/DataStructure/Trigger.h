#ifndef DataStructure_Trigger_h
#define DataStructure_Trigger_h

namespace DataStructure {
class Initiator;
class Source;
} /* End of namespace DataStructure */

namespace DataStructure {

class Trigger {

 public:

    /**
     * @element-type Initiator
     */
    Initiator *myInitiator;

    /**
     * @element-type Source
     */
    Source *mySource;

};

} /* End of namespace DataStructure */

#endif // DataStructure_Trigger_h
