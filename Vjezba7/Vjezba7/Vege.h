#ifndef VEGE_H
#define VEGE_H
#include "../../Vjezba5/Vjezba5.1/Food.h"
#include <vector>

class Vege: public Food
{
public:
	Vege(string type, string name, float water, float protein, float fat, float carbs, date expirationDate, float dailyRequirement, float singleConsumption, float sideConsumption);
	void setSingleCons(float val);
	float getSingleCons();
	void setSideCons(float val);
	float getSideCons();
	friend ostream& operator<<(ostream& os, const Vege& vege);
	friend istream& operator>>(istream& is, Vege& vege);
	friend ostream& operator<<(ostream& os, const Vege& vege) {
		os << "Naziv: " << vege.getName() << endl;
		os << "Potrosnja u Kg (Kao samostalno): " << vege.singleConsumption << endl;
		os << "Potrosnja u Kg (Kao dio jela): " << vege.sideConsumption << endl;

		return os;
	}
	friend istream& operator>>(istream& is, Vege& vege) {

		string temp;
		int consTemp;
		cout << "Naziv jela: ";
		is >> temp;
		vege.setName(temp);
		cout << "Potrosnja u Kg (Kao samostalno): ";
		is >> consTemp;
		vege.setSingleCons(consTemp);
		cout << "Potrosnja u Kg (Kao prilog jelu): ";
		is >> consTemp;
		vege.setSideCons(consTemp);

		return is;
	}
	~Vege();

private:


	float singleConsumption;
	float sideConsumption;

};

class Rice: public Vege
{
public:
	


private:

};

class Tofu : public Vege
{
public:
		


private:

};

class Hummus : public Vege
{
public:

private:

};




#endif // !VEGE_H
