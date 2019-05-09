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

string _Date::dateString() {

	return to_string(day) + "-" + to_string(month) + "-" + to_string(year);

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
	today.fillDate(timePtr->tm_year + 1900, timePtr->tm_mon, timePtr->tm_mon);

	this->consumption.resize(this->expirationDate.returnDiff(today) * 2);

	cout << "Constructor called" << endl;

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

	cout << "#####" << this->name << "#####" << endl;
	cout << "Lower or Raise daily food requirements. Use arrow keys to manipulate. Press q to save!" << endl;

	while ((choice != 0)) {

		switch (_getch())
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

void Food::addConsumptionData(float amount, int months, int years) {

	monthlyCons temp;
	time_t t = time(NULL);
	tm* timePtr = localtime(&t);

	if (years > timePtr->tm_year + 1900 ) {
		cout << "Unable to add data for next year" << endl;
	}
	else {

		for (unsigned int i = 0; i < consumption.size(); i++) {
			if (this->consumption[i].monthly.year == years) {
				if (this->consumption[i].monthly.month == months) {
					cout << "Data already exists" << endl;
					break;
				}
			}

			temp.createData(amount, months, years);
			consumption.push_back(temp);

		}

	}

}
bool Food::checkIfIncreased() const{


		time_t t = time(NULL);
		tm* timePtr = localtime(&t);
		int currentYear = timePtr->tm_year + 1900;

		float currentAmount = 0, prevAmount = 0;

		for (unsigned int i = 0; i < consumption.size(); i++) {
			if (consumption[i].monthly.year == currentYear) {
				currentAmount = consumption[i].consumption;
			}
			else if (consumption[i].monthly.year == currentYear - 1) {
				prevAmount = consumption[i].consumption;
				
			}
		}

		cout << "Current: " << currentAmount << endl;
		cout << "Prev: " << prevAmount << endl;

		if (currentAmount > (prevAmount + (0.1 * prevAmount))) {
			cout << endl << "Povecanje za vise od 10%" << endl;
			return true;
		}
		else if (currentAmount < (prevAmount - (0.1 * prevAmount))) {
			cout << endl << "Smanjenje za vise od 10%" << endl;
			return true;
		}

		return false;
	}

void Food::print() const {

	date exp = this->expirationDate;


	cout << endl;
	cout << "Type - " << this->type << endl;
	cout << "Name - " << this->name << endl;
	cout << "Water - " << this->water << endl;
	cout << "Protein - " << this->protein << endl;
	cout << "Fat - " << this->fat << endl;
	cout << "Carbs - " << this->carbs << endl;
	cout << "Expiration date - " << exp.dateString() << endl;
	cout << "Daily requirement - " << this->dailyRequirement << endl;
	cout << endl;
}

void Food::showConsumption() const{
	for (unsigned int i = 0; i < this->consumption.size(); i++) {
		cout << "Year: " << consumption[i].monthly.year << "Month: " << consumption[i].monthly.month << " - " << consumption[i].consumption << endl;
	}
}


