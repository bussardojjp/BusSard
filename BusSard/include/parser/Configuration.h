#ifndef Parser_Configuration_h
#define Parser_Configuration_h

namespace Parser {
class ConfigurationCreator;
} /* End of namespace Parser */

namespace Parser {

class Configuration {

 private:
	int resolutionX;
	int resolutionY;

 public:

 	int getResolutionX() const {
 		return resolutionX;
 	}

 	void setResolutionX(int resolutionX) {
 		this->resolutionX = resolutionX;
 	}

 	int getResolutionY() const {
 		return resolutionY;
 	}

 	void setResolutionY(int resolutionY) {
 		this->resolutionY = resolutionY;
 	}

};



} /* End of namespace Parser */

#endif // Parser_Configuration_h
