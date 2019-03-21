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

string filterVector(vector<string> &recenice) {

	string result = "";

	//Iteracija kroz sve recenice
	for (unsigned int i = 0; i < recenice.size(); i++) {

		string temp = recenice[i];
		

		//Iteracija kroz sve karaktere recenice
		for (unsigned int j = 0; j < temp.length(); ++j) {

			int counter = 1;
			int k = j;
			while (temp[k] == temp[k + 1]) {
				counter++;
				k = k + 1;
				if (k + 1 == temp.length()) {
					counter++;
				}
			}
			if (counter > 1) {


				string insert = to_string(counter) + (char)(temp[j]);
				j = j + counter;
				
				result += insert;
				
			}
			

		
		}




	}

	return result;
}


int main() {

	vector<string> recenice;

	setup(2, recenice);

	for (int i = 0; i < recenice.size(); i++) {

		cout << recenice[i] << endl;

	}

	string result = filterVector(recenice);

	for (int i = 0; i < result.size(); i++) {

		cout << result[i];

	}

}