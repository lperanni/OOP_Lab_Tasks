#include <iostream>
#include <string>
#include <vector>

using namespace std;


typedef struct _Producent {

	string name;
	string movie;
	int year;


}producent;

void enterProducerInfo(vector<producent> &producenti, int n) {
		
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

int findHits(vector<producent> producenti, producent person) {

	int count = 0;
	string name = person.name;


	for (int i = 0; i < producenti.size(); i++) {

		if (producenti[i].name == name) {

			count++;
		}

	}


	return count;

}

vector<producent> findMostHits(vector<producent> producenti){

	vector<producent> max;
	int temp = 0;
	producent tempMax;

	for (int i = 0; i < producenti.size(); i++) {

		if (findHits(producenti, producenti[i]) > temp) {
			tempMax = producenti[i];
			temp = findHits(producenti, tempMax);
		}
		
	}

	max.push_back(tempMax);

	for (int i = 0; i < producenti.size(); i++) {

		if (findHits(producenti, producenti[i]) == temp && producenti[i].name != tempMax.name) {
			max.push_back(producenti[i]);
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

	vector<producent> max = findMostHits(producenti);


	cout << "Najvise hitova" << endl;
	for (int i = 0; i < max.size(); i++) {

		cout << max[i].name << " - ";

	}

}