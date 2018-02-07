#ifndef Parser_ConfigurationCreator_h
#define Parser_ConfigurationCreator_h

namespace Parser {
class XML_Writer;
class XML_Reader;
class Configuration;
} /* End of namespace Parser */

namespace Parser {

class ConfigurationCreator {

 public:

    /**
     * @element-type XML_Writer
     */
    XML_Writer *myXML_Writer;

    /**
     * @element-type XML_Reader
     */
    XML_Reader *myXML_Reader;

    /**
     * @element-type Configuration
     */
    Configuration *myConfiguration;
};

} /* End of namespace Parser */

#endif // Parser_ConfigurationCreator_h
