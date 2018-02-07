#ifndef Parser_Configuration_h
#define Parser_Configuration_h

namespace Parser {
class ConfigurationCreator;
} /* End of namespace Parser */

namespace Parser {

class Configuration {

 public:

    /**
     * @element-type ConfigurationCreator
     */
    ConfigurationCreator *myConfigurationCreator;
};

} /* End of namespace Parser */

#endif // Parser_Configuration_h
