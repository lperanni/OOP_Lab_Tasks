#ifndef FOOD_H
#define FOOD_H

#include <iostream>
#include <string>
#include <ctime>
#include <vector>


using namespace std;

typedef struct _Date {

	int year;
	int month;
	int day;
	string dateString() {

		return to_string(day) + "-" + to_string(month) + "-" + to_string(year);

	}
	int returnDiff(_Date other);
	void fillDate(int year, int month, int day);

}date;

typedef struct _Consumption_per_month {

	float consumption;
	date monthly;
	void createData(float consumption, int month, int year);

}monthlyCons;

class Food
{

private:

	string type;
	string name;
	float water;
	float protein;
	float fat;
	float carbs;
	_Date expirationDate;
	float dailyRequirement;
	vector<monthlyCons> consumption;


public:

	Food(string type, string name, float water, float protein, float fat, float carbs, date expirationDate, float dailyRequirement);
	~Food();
	Food(const Food &toCopy);
	void changeDailyReq();
	void addConsumptionData(float amount, int month, int year);
	bool checkIfIncreased(vector<monthlyCons> data);
	void print(Food obj) const;



};


#endif // !FOOD_H

