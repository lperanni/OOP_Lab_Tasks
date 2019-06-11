#include "Operation.h"
#include <string>
#include <iostream>
#include "CustomException.h"


using namespace std;

bool Operation::check() {

	if (isdigit(this->num1) && isdigit(this->num2) && this->opSign != NULL) {
		this->success = true;
	}

	return this->success;
}

void Operation::enterNum(int index) {

	string temp = "";
	try
	{
		
		cout << "Enter integer: ";
		if (!(cin >> temp)) {
			throw CustomException("False input");
		}
		if(!stoi(temp) && temp != "0")
		{
			throw CustomException("False input");
		}

	}
	catch (CustomException e)
	{
		cout << "Error occurred" << endl;
	}

	switch (index) {
		
		case 1:
			num1 = stoi(temp);
			break;

		case 2: 
			num2 = stoi(temp);
	}
}

void Operation::enterOp() {

	string temp;

	try
	{
		cout << "Enter operation sign: ";
		if (!(cin >> temp)) {
			throw CustomException("Faulty input");
		}
		else {
			if (temp == "+") {
				opSign = '+';
			}
			else if (temp == "-") {
				opSign = '-';
			}
			else if (temp == "*") {
				opSign = '*';
			}
			else if (temp == "/") {
				opSign = '/';
			}
			else{
				throw CustomException("False input.");
			}
		}
	}
	catch (CustomException e)
	{
		cout << "Wrong input. Aborting....." << endl;
	}

}

int Operation::execute() {

	try
	{
		if (!(num1 || num2 || opSign)) {
			throw CustomException("Not all operands and/or Operators are ready.");
		}

		switch (opSign)
		{
			case 42:
				success = true;
				return num1 * num2;
			case 43:
				success = true;
				return num1 + num2;
			case 45:
				success = true;
				return num1 - num2;
			case 47:
				if (num2 == 0) { throw CustomException("Can´t divide by zero"); }
				success = true;
				return num1 / num2;
			default:
				throw CustomException("Wrong parameters");
		}
	}
	catch (CustomException e)
	{
		cout << "Faulty parameters! Aborting...." << endl;
	}


}