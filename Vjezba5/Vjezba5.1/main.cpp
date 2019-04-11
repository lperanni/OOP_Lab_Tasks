#include <iostream>
#include "Food.h"

using namespace std;


//U main funkciji napunite vektor hranom, te napisite funkciju koja za pojedinu hranu
//mijenja podatke o dnevnoj potrebnoj kolicini ukoliko se potrosnja hrane povecala ili
//smanjila za vise od 10 % u zadnjih godinu dana.Ispisite vektor prije i poslije promjena.




int main() {


	date expiration;
	expiration.fillDate(2020, 3, 27);

	Food* test = new Food("Fruit","Apple", 0.7, 0.2, 0.4, 0.1,expiration,2.5);

	test->changeDailyReq();
	test->addConsumptionData(27.3, 5, 1998);
	test->addConsumptionData(28, 5, 1998);
	test->addConsumptionData(28, 5, 2019);




}