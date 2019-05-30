#include "Zbroj.h"
#include <iostream>

int main() {



	/*ZADATAK 2*/

	Zbroj<int> num1(5);
	Zbroj<int> num2(9);
	Zbroj<char> letter1('e');
	Zbroj<char> letter2('f');

	num1.add(num2);
	letter1.add(letter2);


	cout << num1.getVal() << endl;
	cout << letter1.getVal() << endl;



}