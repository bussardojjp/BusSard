#ifndef Parser_InitiatorCreator_h
#define Parser_InitiatorCreator_h

namespace Parser {
class XML_Reader;
} /* End of namespace Parser */

namespace Parser {

class InitiatorCreator {

 public:

    /**
     * @element-type XML_Reader
     */
    XML_Reader *myXML_Reader;
};

} /* End of namespace Parser */

#endif // Parser_InitiatorCreator_h
