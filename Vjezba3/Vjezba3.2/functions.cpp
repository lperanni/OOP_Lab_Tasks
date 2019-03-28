
#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>
#include "functions.h"

using namespace std;

vector<int> loadVector(bool randOrNot, int a = 0, int b = 100, int n = 5) {

	vector<int> returnVector;
	int temp;


	if (randOrNot == false) {
		for (int i = 0; i < n; i++) {
			cout << i + 1 << ". clan: ";
			cin >> temp;
			returnVector.push_back(temp);
		}
	}
	else {

		for (int i = 0; i < n; i++) {
			temp = a + (rand() % static_cast<int>(b - a + 1));
			returnVector.push_back(temp);
		}
	}



	return returnVector;

}

void print_vector(vector<int> toPrint) {

	for (int i = 0; i < toPrint.size(); i++) {
		cout << i + 1 << ". clan: " << toPrint[i] << endl;
	}

	cout << endl;

}

vector<int> createFilteredVector(vector<int> vec1, vector<int> vec2) {

	vector<int> newVector;

	for (int i = 0; i < vec1.size(); i++) {
		if (!(binary_search(vec2.begin(), vec2.end(), vec1[i]))) {
			newVector.push_back(vec1[i]);
		}
	}

	return newVector;
}
