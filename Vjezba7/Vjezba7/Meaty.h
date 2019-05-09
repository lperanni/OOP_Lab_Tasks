#ifndef MEATY_H
#define MEATY_H
#include "../../Vjezba5/Vjezba5.1/Food.h"


class Meaty: public Food
{
public:

	Meaty(string type, string name, float water, float protein, float fat, float carbs, date expirationDate, float dailyRequirement, float singleConsumption, float dishConsumption);
	void setSingleCons(float val);
	float getSingleCons();
	void setDishCons(float val);
	float getDishCons();
	friend ostream& operator<<(ostream& os, const Meaty& meaty);
	friend istream& operator>>(istream& is, Meaty& meaty);
	friend ostream& operator<<(ostream& os, const Meaty& meaty) {
		os << "Naziv: " << meaty.getName() << endl;
		os << "Potrosnja u Kg (Kao samostalno): " << meaty.singleConsumption << endl;
		os << "Potrosnja u Kg (Kao dio jela): " << meaty.dishConsumption << endl;

		return os;
	}
	friend istream& operator>>(istream& is, Meaty& meaty) {

		string temp;
		int consTemp;
		cout << "Naziv jela: ";
		is >> temp;
		meaty.setName(temp);
		cout << "Potrosnja u Kg (Kao samostalno): ";
		is >> consTemp;
		meaty.setSingleCons(consTemp);
		cout << "Potrosnja u Kg (Kao dio jela): ";
		is >> consTemp;
		meaty.setDishCons(consTemp);

		return is;
	}
	~Meaty();

private:

	float singleConsumption;
	float dishConsumption;

};

class Meat : public Meaty
{
public:


private:

};

class Ham : public Meaty
{
public:


private:

};

class Prosciutto : public Meaty
{
public:


private:

};



#endif // !MEATY_H
