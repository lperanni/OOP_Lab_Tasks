#include <iostream>
#include <vector>
#include <time.h>


using namespace std;

vector<int> loadVector(bool randOrNot,int a = 0, int b = 100, int n = 5) {

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

}


int main() {

	srand(time(NULL));

	vector<int> vektor = loadVector(true, 3, 9, 7);

	print_vector(vektor);

}