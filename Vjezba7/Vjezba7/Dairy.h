#ifndef DAIRY_H
#define DAIRY_H

#include "../../Vjezba5/Vjezba5.1/Food.h"


class Dairy: public Food
{
public:
	Dairy(string type, string name, float water, float protein, float fat, float carbs, date expirationDate, float dailyRequirement, float singleConsumption, float dishConsumption);
	void setSingleCons(float val);
	float getSingleCons();
	void setDishCons(float val);
	float getDishCons();
	friend ostream& operator<<(ostream& os, const Dairy& dairy);
	friend istream& operator>>(istream& is, Dairy& dairy);
	friend ostream& operator<<(ostream& os, const Dairy& dairy) {
		os << "Naziv: " << dairy.getName() << endl;
		os << "Potrosnja u Kg (Kao samostalno): " << dairy.singleConsumption << endl;
		os << "Potrosnja u Kg (Kao dio jela): " << dairy.dishConsumption << endl;

		return os;
	}
	friend istream& operator>>(istream& is, Dairy& dairy) {

		string temp;
		int consTemp;
		cout << "Naziv jela: ";
		is >> temp;
		dairy.setName(temp);
		cout << "Potrosnja u Kg (Kao samostalno): ";
		is >> consTemp;
		dairy.setSingleCons(consTemp);
		cout << "Potrosnja u Kg (Kao dio jela): ";
		is >> consTemp;
		dairy.setDishCons(consTemp);

		return is;
	}
	~Dairy();

private:

	float singleConsumption;
	float dishConsumption;

};


class Cheese: public Dairy
{
public:
	

private:

};

class Milk : public Dairy
{
public:


private:

};

class Yoghurt : public Dairy
{
public:


private:

};



#endif // !DAIRY_H

