#include <iostream>

using namespace std;

//Uzasno rjesenje sram me oprostite

int newLength = 0;


void fillArray(int* &niz, int n) {

	int temp = 0;

	cout << "\t\t\t####Punite niz brojevima od 1 -9####\n" << endl;

	for (int i = 0; i < n; i++) {
		cout << i + 1 << ". clan: ";
		cin >> temp;
		if (temp < 1 && temp > 9) {
			cout << "\nPogresan unos. Ponovite!" << endl;
			i--;
		}
		else {
			niz[i] = temp;
		}
	}
	cout << "\n\n" << endl;

}
void printArray(int* niz, int n) {

	for (int i = 0; i < n; i++) {
		cout << i + 1 << ". clan - " << niz[i] << endl;
	}
	cout << "\n\n" << endl;
}



int* checkArray(int* &niz, int n) {

	bool* checker = new bool[9]{ false };
	int missingNumberCounter = 0;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 9; j++) {
			if (niz[i] == j + 1) {
				missingNumberCounter++;
				checker[j] = true;
			}
		}
	}


	missingNumberCounter = 9 - missingNumberCounter;		//Preostali brojevi

	cout << missingNumberCounter << " numbers are missing\n"  << endl;

	::newLength = n + missingNumberCounter;

	cout << "new length is : " << ::newLength << endl;

	int* numbersToAdd = new int[missingNumberCounter];		//Kreiranje niza brojeva koje treba dodati 
	int memberCounter = 0;

	for (int i = 1; i < 10; i++) {
		if (checker[i-1] == false) {
			numbersToAdd[memberCounter] = i ;
			memberCounter++;
		}
	}


	int* returnArray = new int[n + missingNumberCounter];

	for (int i = 0; i < n; i++) {							//Prvo dodajemo izvorni niz pa niz sa novim brojevima
		returnArray[i] = niz[i];
	}
	for (int i = 0; i < missingNumberCounter; i++) {
		returnArray[n + i] = numbersToAdd[i];
	}

	return returnArray;

}


int main() {

	
	int array_n = 0;

	cout << "\t\t\t####DOBRODOSLI####\n" << endl;
	cout << "\t\t\tUnesite zeljenu velicinu niza: ";
	cin >> array_n;

	int* niz = new int[array_n];

	fillArray(niz, array_n);

	cout << "\t\t\t####Niz prije obrade####\n" << endl;

	printArray(niz, array_n);

	cout << "\t\t\t####Niz nakon obrade####\n" << endl;

	int* noviNiz = checkArray(niz, array_n);


	printArray(noviNiz, ::newLength);


	


}