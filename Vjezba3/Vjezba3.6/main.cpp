#include <iostream>
#include <string>
#include <vector>


using namespace std;

void setup(int n, vector<string> &recenice) {

	string temp;
	bool standard = true;

	for (int i = 0; i < n; i++) {

		cout << "Unesi " << i + 1 << ". string: ";
		cin >> temp;


		while (temp.size() >= 20) {
			cout << "Pogresan unos! Ponovi." << endl;
			cin >> temp;
		}

		for (int j = 0; j < temp.size(); j++) {

			if (!((temp[i] > 47 && temp[i] < 58) || (temp[i] > 64 && temp[i] < 91) || (temp[i] > 96 && temp[i] < 123))) {
				
				cout << "Pogresan unos! Ponovi." << endl;
				i--;
				standard = false;
			}
			
			

		}
		if (standard) {
			recenice.push_back(temp);
		}
	}

}

 


int main() {

	vector<string> recenice;

	setup(3, recenice);

	for (int i = 0; i < recenice.size(); i++) {

		cout << recenice[i] << endl;

	}

}