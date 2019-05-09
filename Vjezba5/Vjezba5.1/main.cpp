#include <iostream>
#include "Food.h"
#include <vector>
#include <string>

using namespace std;


//U main funkciji napunite vektor hranom, te napisite funkciju koja za pojedinu hranu
//mijenja podatke o dnevnoj potrebnoj kolicini ukoliko se potrosnja hrane povecala ili
//smanjila za vise od 10 % u zadnjih godinu dana.Ispisite vektor prije i poslije promjena.

void editFood(vector<Food> &foods) {

	bool temp = 0;
	for (unsigned int i = 0; i < foods.size(); i++) {
		temp = foods[i].checkIfIncreased();
		if (temp == true) {
			foods[i].changeDailyReq();
		}
	}

	cout << endl;

}

int main() {


	date expiration;
	expiration.fillDate(2019, 3, 27);

	vector<Food> foods;


	Food* apple = new Food("Fruit","Apple", 0.7, 0.2, 0.4, 0.1,expiration,2.5);
	apple->addConsumptionData(54.5, 4, 2018);
	apple->addConsumptionData(167.4, 7, 2019);
	foods.push_back(*apple);
	Food* sandwich = new Food("Bread", "Sandwich", 0.3, 0.8, 0.3, 0.8, expiration, 0.5);
	sandwich->addConsumptionData(34.5, 1, 2018);
	sandwich->addConsumptionData(34.5, 9, 2019);
	foods.push_back(*sandwich);
	Food* burger = new Food("Bread", "Burger", 0.3, 0.8, 0.3, 0.8, expiration, 0.5);
	burger->addConsumptionData(114.5, 7, 2018);
	burger->addConsumptionData(24.5, 10, 2019);
	foods.push_back(*burger);
	Food* pear = new Food("Fruit", "Pear", 0.3, 0.8, 0.3, 0.8, expiration, 0.5);
	pear->addConsumptionData(48.2, 4, 2018);
	pear->addConsumptionData(24.5, 12, 2019);
	foods.push_back(*pear);

	
	
	for (unsigned int i = 0; i < foods.size(); i++) {
		foods[i].print();
	}

	editFood(foods);

	for (unsigned int i = 0; i < foods.size(); i++) {
		foods[i].print();
		//foods[i].showConsumption();			Koristeno pri debugiranju
	}

	

	


}