#include <vector>
#include <iostream>
#include "../../Vjezba5/Vjezba5.1/Food.h"
#include "Vege.h"
#include "Dairy.h"
#include "Meaty.h"
#include "Sweets.h"


using namespace std;

int main() {

	vector<Food *> jela;

	date exp;
	exp.fillDate(2020, 5, 18);

	Dairy* edam = new Dairy("Cheese", "Edamer", 0.7, 0.5, 0.4, 0.8, exp, 0.9, 2.7, 9.2);
	Meaty* poli = new Meaty("Parizer", "Poli", 0.7, 0.5, 0.4, 0.8, exp, 0.9, 2.7, 9.2);
	Vege* broccoli = new Vege("Vege", "Broccoli", 0.7, 0.5, 0.4, 0.8, exp, 0.9, 2.7, 9.2);
	Sweets* cupavac = new Sweets("Kolac", "Cupavac", 0.7, 0.5, 0.4, 0.8, exp, 0.9, 2.7);


	jela.push_back(edam);
	jela.push_back(poli);
	jela.push_back(broccoli);
	jela.push_back(cupavac);

	for (auto i = jela.begin(); i != jela.end(); i++)
	{
		cout << *i;
	}

}