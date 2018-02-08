#ifndef Parser_XML_Reader_h
#define Parser_XML_Reader_h

namespace Parser {
class ActuatorCreator;
class InitiatorCreator;
class ConfigurationCreator;
} /* End of namespace Parser */

namespace Parser {

class XML_Reader {

 public:

    /**
     * @element-type ActuatorCreator
     */
    ActuatorCreator *myActuatorCreator;

    /**
     * @element-type InitiatorCreator
     */
    InitiatorCreator *myInitiatorCreator;

    /**
     * @element-type ConfigurationCreator
     */
    ConfigurationCreator *myConfigurationCreator;
};

} /* End of namespace Parser */

#endif // Parser_XML_Reader_h
