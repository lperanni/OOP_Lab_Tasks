#include <iostream>
#include <string>
#include <vector>

using namespace std;


typedef struct _Producent {

	string name;
	string movie;
	int year;


}producent;

void enterProducerInfo(vector<producent> producenti, int n) {
		
	producent temp;

	for (int i = 0; i < n; i++) {

		cout << "Ime producenta: ";
		cin >> temp.name;
		cout << "Ime filma: ";
		cin >> temp.movie;
		cout << "Godina izlaska: ";
		cin >> temp.year;

		cout << endl;
		producenti.push_back(temp);
	}



	cout << endl;

}

producent findMostHits(vector<producent> producenti){

	producent max;
	int tempOccurrences = 0;
	int maxOccurrences = 0;

	for (int i = 0; i < producenti.size(); i++) {

		string temp = producenti[i].name;
		for (int j = 0; j < producenti.size(); j++) {
			if ((i != j) && (temp == producenti[j].name)) {
				tempOccurrences++;
			}
		}

		if (tempOccurrences > maxOccurrences) {
			max = producenti[i];
			maxOccurrences = tempOccurrences;
			tempOccurrences = 0;
			
		}
	}

	return max;
}


int main() {

	vector<producent> producenti;

	int choice = 1;

	cout << "Odaberi kolicinu unosa: ";
	cin >> choice;
	cout << endl;

	enterProducerInfo(producenti, choice);

	producent max = findMostHits(producenti);

	cout << max.name << endl;

}