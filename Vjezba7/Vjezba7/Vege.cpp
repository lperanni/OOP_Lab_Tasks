#include "Vege.h"
#include "../../Vjezba5/Vjezba5.1/Food.h"

Vege::Vege(string type, string name, float water, float protein, float fat, float carbs, date expirationDate, float dailyRequirement, float singleConsumption, float sideConsumption) :
	Food(type, name, water, protein, fat, carbs, expirationDate, dailyRequirement) {

	this->singleConsumption = singleConsumption;
	this->sideConsumption = sideConsumption;
}

void Vege::setSingleCons(float val) {
	this->singleConsumption = val;
}
float Vege::getSingleCons() {
	return this->singleConsumption;
}
void Vege::setSideCons(float val) {
	this->sideConsumption = val;
}
float Vege::getSideCons() {
	return this->sideConsumption;
}

Vege::~Vege() {
	cout << "Pozvan Konstruktor" << endl;
}
