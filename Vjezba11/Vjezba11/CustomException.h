#ifndef CUSTOMEXCEPTION_H
#define CUSTOMEXCEPTION_H

#include <iostream>
#include <exception>
#include <fstream>

using namespace std;

class CustomException : exception
{
public:
	CustomException(string err) {

		this->err = err;
		cout << err << endl;
		saveToFile();

	}

	void saveToFile() {

		ofstream fout("errors.log");
		fout << err << endl;
		
	}

private:

	string err;


};



#endif // !CUSTOMEXCEPTION_H

