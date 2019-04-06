#include <iostream>
#include "Gun.h"
#include "Target.h"
#include <vector>

using namespace std;

//Inicijira pocetne uvjete programa
vector<Target> initiate(int n) {

	vector<Target> mete;
	

	for (int i = 0; i < n; i++) {

		Target temp;
		temp.generateRandomTarget();

		mete.push_back(temp);
		
	}

	return mete;
}


int main() {

	Gun pucac;

	vector<Target> mete = initiate(4);




}