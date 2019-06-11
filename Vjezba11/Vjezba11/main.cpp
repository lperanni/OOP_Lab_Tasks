#include "Operation.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> results;
	int rez;

	Operation* exercise = new Operation();

	while (!exercise->success) {

		exercise->enterNum(1);

		exercise->enterNum(2);

		exercise->enterOp();

		rez = exercise->execute();

	}

	cout << "Rezultat odabrane operacije je: " << rez << endl;

	results.push_back(rez);

	

	


}