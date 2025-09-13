/*
 *      Author: MaksiKutrolli
 */

#ifndef RUNTIMEEXCEPTION_H_
#define RUNTIMEEXCEPTION_H_

#include <iostream>
#include <string.h>
using namespace std;

class RuntimeException {
	private:
		string errorMsg;
	public:
	RuntimeException(const string& err) {
		errorMsg = err;
	}

	string getMessage() const {
		return errorMsg;
	}
};




#endif /* RUNTIMEEXCEPTION_H_ */
