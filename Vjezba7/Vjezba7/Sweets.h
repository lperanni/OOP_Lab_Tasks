#ifndef SWEETS_H
#define SWEETS_H
#include "../../Vjezba5/Vjezba5.1/Food.h"


class Sweets: public Food
{
public:
	Sweets(string type, string name, float water, float protein, float fat, float carbs, date expirationDate, float dailyRequirement, float singleConsumption);
	void setSingleCons(float val);
	float getSingleCons();
	friend ostream& operator<<(ostream& os, const Sweets& sweet);
	friend istream& operator>>(istream& is, Sweets& sweet);
	friend ostream& operator<<(ostream& os, const Sweets& sweet) {
		os << "Naziv: " << sweet.getName() << endl;
		os << "Potrosnja u Kg (Kao samostalno): " << sweet.singleConsumption << endl;

		return os;
	}
	friend istream& operator>>(istream& is, Sweets& sweet) {

		string temp;
		int consTemp;
		cout << "Naziv jela: ";
		is >> temp;
		sweet.setName(temp);
		cout << "Potrosnja u Kg (Kao samostalno): ";
		is >> consTemp;
		sweet.setSingleCons(consTemp);
		

		return is;
	}
	~Sweets();
	

private:


	float singleConsumption;
	

};

class Hungarian: public Sweets
{
public:
	

private:

};

class Creampie : public Sweets
{
public:
	

private:

};

class Cake : public Sweets
{
public:
	

private:

};


#endif // !SWEETS_H
