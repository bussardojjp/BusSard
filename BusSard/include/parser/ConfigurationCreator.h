#ifndef Parser_ConfigurationCreator_h
#define Parser_ConfigurationCreator_h

#include <string>

#include "parser/Configuration.h"

namespace Parser {
class XML_Writer;
class XML_Reader;
} /* End of namespace Parser */

namespace Parser {

class ConfigurationCreator {

private:
	Configuration* appConfig;

public:
	ConfigurationCreator(std::string path);
	virtual ~ConfigurationCreator(){
		delete appConfig;
	};

	Configuration* readConfig();

};

} /* End of namespace Parser */

#endif // Parser_ConfigurationCreator_h
