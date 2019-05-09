#include "Dairy.h"
#include <iostream>
#include "../../Vjezba5/Vjezba5.1/Food.h"



void Dairy::setSingleCons(float val) {
	this->singleConsumption = val;
}
float Dairy::getSingleCons() {
	return this->singleConsumption;
}
void Dairy::setDishCons(float val) {
	this->dishConsumption = val;
}
float Dairy::getDishCons() {
	return this->dishConsumption;
}


Dairy::Dairy(string type, string name, float water, float protein, float fat, float carbs, date expirationDate, float dailyRequirement, float singleConsumption, float dishConsumption) :
	Food( type,  name,  water,  protein,  fat,  carbs,  expirationDate,  dailyRequirement) {

	this->singleConsumption = singleConsumption;
	this->dishConsumption = dishConsumption;

}
Dairy::~Dairy() {
	cout << "Pozvan Konstruktor" << endl;
}
