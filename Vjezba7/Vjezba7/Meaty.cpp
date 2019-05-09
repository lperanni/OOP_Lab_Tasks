#include "Meaty.h"
#include <iostream>
#include "../../Vjezba5/Vjezba5.1/Food.h"


void Meaty::setSingleCons(float val) {
	this->singleConsumption = val;
}
float Meaty::getSingleCons() {
	return this->singleConsumption;
}
void Meaty::setDishCons(float val) {
	this->dishConsumption = val;
}
float Meaty::getDishCons() {
	return this->dishConsumption;
}

Meaty::Meaty(string type, string name, float water, float protein, float fat, float carbs, date expirationDate, float dailyRequirement, float singleConsumption, float dishConsumption) :
	Food(type, name, water, protein, fat, carbs, expirationDate, dailyRequirement) {

	this->singleConsumption = singleConsumption;
	this->dishConsumption = dishConsumption;

}

Meaty::~Meaty() {
	cout << "Pozvan Konstruktor" << endl;
}