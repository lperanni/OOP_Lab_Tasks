#include <iostream>
#include <string>
#include <conio.h>
#include <ctime>
#include "Food.h"

#define LEFT_ARROW 75
#define RIGHT_ARROW 77


using namespace std;


int _Date::returnDiff(_Date other) {

	int dayNr = this->year * 365 + this->month * 30 + this->day;
	int otherNr = other.year * 365 + other.month * 30 + other.day;

	return dayNr - otherNr;

}
void _Date::fillDate(int year, int month, int day) {
	this->year = year;
	this->month = month;
	this->day = day;
}

void _Consumption_per_month::createData(float consumption, int month, int year) {

	this->consumption = consumption;
	this->monthly.month = month;
	this->monthly.year = year;

}

Food::Food(string type, string name, float water, float protein, float fat, float carbs, date expirationDate, float dailyRequirement) {

	this->type = type;
	this->name = name;
	this->water = water;
	this->protein = protein;
	this->fat = fat;
	this->carbs = carbs;
	this->expirationDate = expirationDate;
	this->dailyRequirement = dailyRequirement;

	date today;
	time_t t = time(NULL);
	tm* timePtr = localtime(&t);
	today.fillDate(timePtr->tm_year, timePtr->tm_mon, timePtr->tm_mon);

	this->consumption.resize(this->expirationDate.returnDiff(today) * 2);



}

Food::~Food() {

	consumption.clear();
	consumption.shrink_to_fit();
	cout << "Destructor called" << endl;

}

Food::Food(const Food &toCopy) {
	
	this->type = toCopy.type;
	this->name = toCopy.name;
	this->water = toCopy.water;
	this->protein = toCopy.protein;
	this->fat = toCopy.fat;
	this->carbs = toCopy.carbs;
	this->expirationDate = toCopy.expirationDate;
	this->dailyRequirement = toCopy.dailyRequirement;
	this->consumption = toCopy.consumption;

	cout << "Copy constructor called" << endl;

}

void Food::changeDailyReq() {

	int choice = 1;

	cout << "Lower or Raise daily food requirements. Use arrow keys to manipulate. Press q to exit!" << endl;

	while ((choice != 0)) {

		switch (getch())
		{
			case LEFT_ARROW :
				this->dailyRequirement--;
				if (this->dailyRequirement < 1) {
					cout << "Cant go lower than 0" << endl;
					break;
				}
				cout << "Daily requirement = " << this->dailyRequirement << endl;
				break;
			case RIGHT_ARROW :
				this->dailyRequirement++;
				cout << "Daily requirement = " << this->dailyRequirement << endl;
				break;
			case 113 :
				choice = 0;
				cout << "Changes saved!" << endl;
				break;
		}

	}
	

}

void Food::addConsumptionData(float amount, int month, int year) {

	monthlyCons temp;
	time_t t = time(NULL);
	tm* timePtr = localtime(&t);

	if (year == timePtr->tm_year) {
		cout << "Unable to add data for current year" << endl;
	}
	else {

		for (int i = 0; i < consumption.size(); i++) {
			if (consumption[i].monthly.year == year) {
				if (consumption[i].monthly.month == month) {
					cout << "Data already exists" << endl; 
					break;
				}
			}

			temp.createData(amount, month, year);
			consumption.push_back(temp);
			
		}

	}



}

bool Food::checkIfIncreased(vector<monthlyCons> data) {


	time_t t = time(NULL);
	tm* timePtr = localtime(&t);
	int currentYear = timePtr->tm_year;

	float currentAmount, prevAmount;

	for (unsigned int i = 0; i < data.size(); i++) {
		if (data[i].monthly.year == currentYear) {
			currentAmount = data[i].consumption;
		} else if(data[i].monthly.year == currentYear - 1){
			prevAmount = data[i].consumption;
		}
	}

	if (currentAmount > prevAmount + 0.1 * prevAmount ) {
		cout << "Povecanje za vise od 10%" << endl;
		return true;
	}
	else if (currentAmount < prevAmount - 0.1 * prevAmount) {
		cout << "Smanjenje za vise od 10%" << endl;
		return true;
	}

	return false;

}

void Food::print(Food obj) const {

	cout << "Type - " << this->type << endl;
	cout << "Name - " << this->name << endl;
	cout << "Water - " << this->water << endl;
	cout << "Protein - " << this->protein << endl;
	cout << "Fat - " << this->fat << endl;
	cout << "Carbs - " << this->carbs << endl;
	cout << "Expiration date - " << this->expirationDate.dateString << endl;
	cout << "Daily requirement - " << this->dailyRequirement << endl;
}


