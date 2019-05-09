#include "Sweets.h"
#include "../../Vjezba5/Vjezba5.1/Food.h"

void Sweets::setSingleCons(float val) {
	this->singleConsumption = val;
}
float Sweets::getSingleCons() {
	return this->singleConsumption;
}



Sweets::Sweets(string type, string name, float water, float protein, float fat, float carbs, date expirationDate, float dailyRequirement, float singleConsumption) :
	Food(type, name, water, protein, fat, carbs, expirationDate, dailyRequirement) {

	this->singleConsumption = singleConsumption;
	

}

Sweets::~Sweets() {
	cout << "Pozvan Konstruktor" << endl;
}