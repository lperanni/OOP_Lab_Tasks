#include <iostream>
#include "Vec3.h"

using namespace std; 
using namespace OOP;

int main() {

	Vec3 vektor1, vektor2;


	vektor1.setX(4);
	vektor1.setY(3);
	vektor1.setZ(5);
	
	cin >> vektor2;


	cout << vektor1 << endl;
	cout << vektor1 + vektor2 << endl;

	Vec3 temp = vektor1;

	cout << temp << endl;

	vektor1 = vektor2 * 5;

	cout << vektor1 << endl;

	vektor1 *= vektor2;


	cout << vektor1[1];

	cout << vektor1  << endl;


	vektor1.normalize();

	cout << vektor1 << endl;




	
}