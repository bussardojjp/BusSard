#ifndef Parser_ActuatorCreator_h
#define Parser_ActuatorCreator_h

namespace Parser {
class XML_Writer;
class XML_Reader;
} /* End of namespace Parser */

namespace Parser {

class ActuatorCreator {

 public:

    /**
     * @element-type XML_Writer
     */
    XML_Writer *myXML_Writer;

    /**
     * @element-type XML_Reader
     */
    XML_Reader *myXML_Reader;
};

} /* End of namespace Parser */

#endif // Parser_ActuatorCreator_h
