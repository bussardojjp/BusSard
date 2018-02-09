#ifndef Parser_BusCreator_h
#define Parser_BusCreator_h

namespace Parser {
class XML_Writer;
} /* End of namespace Parser */

namespace Parser {

class BusCreator {

 public:

    /**
     * @element-type XML_Writer
     */
    XML_Writer *myXML_Writer;
};

} /* End of namespace Parser */

#endif // Parser_BusCreator_h
