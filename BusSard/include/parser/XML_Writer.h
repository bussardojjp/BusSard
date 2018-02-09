#ifndef Parser_XML_Writer_h
#define Parser_XML_Writer_h

namespace Parser {
class BusCreator;
class ActuatorCreator;
class ConfigurationCreator;
} /* End of namespace Parser */

namespace Parser {

class XML_Writer {

 public:

    /**
     * @element-type BusCreator
     */
    BusCreator *myBusCreator;

    /**
     * @element-type ActuatorCreator
     */
    ActuatorCreator *myActuatorCreator;

    /**
     * @element-type ConfigurationCreator
     */
    ConfigurationCreator *myConfigurationCreator;
};

} /* End of namespace Parser */

#endif // Parser_XML_Writer_h
