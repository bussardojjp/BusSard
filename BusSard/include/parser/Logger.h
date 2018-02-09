/*
 * Logger.h
 *
 *  Created on: 09.02.2018
 *      Author: 90759
 */

#ifndef PARSER_LOGGER_H_
#define PARSER_LOGGER_H_

#include <string>

namespace Parser{

class Logger {
	private:

	public:
		Logger();
		virtual ~Logger();

		static int TYPE_ERROR;
		static int TYPE_MESSAGE;
		static int TYPE_DEBUG;

		static void LOG(int type, std::string message);
	};
}


#endif /* PARSER_LOGGER_H_ */
