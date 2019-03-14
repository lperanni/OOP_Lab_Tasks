#include <iostream>

using namespace std;

void fillArray(int* &niz, int n) {

	int temp = 0;

	cout << "\t\t\t####Punite niz brojevima####\n" << endl;

	for (int i = 0; i < n; i++) {
		cout << i + 1 << ". clan: ";
		cin >> niz[i];
	}
	cout << "\n\n" << endl;

}
void printArray(int* niz, int n) {

	for (int i = 0; i < n; i++) {
		cout << i + 1 << ". clan - " << niz[i] << endl;
	}
	cout << "\n\n" << endl;
}


void separator(int* &niz, int n) {
	
	int evenCounter = 0;

	for (int i = 0; i < n; i++) {
		if (niz[i] % 2 == 0) {
			evenCounter++;
		}
	}

	int oddCounter = n - evenCounter;

	int* evenArray = new int[evenCounter];
	int* oddArray = new int[oddCounter];

	int even = 0, odd = 0;

	for (int i = 0; i < n; i++) {
		if (niz[i] % 2 == 0) {
			evenArray[even] = niz[i];
			even++;
		}
		else {
			oddArray[odd] = niz[i];
			odd++;
		}
	}

	for(int i = 0; i < evenCounter; i++){
		niz[i] = evenArray[i];
	}
	for (int i = 0; i < oddCounter; i++) {
		niz[evenCounter + i] = oddArray[i];
	}

	delete[] oddArray;
	delete[] evenArray;

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

	separator(niz, array_n);

	cout << "\t\t\t####Niz nakon obrade####\n" << endl;

	printArray(niz, array_n);

	delete[] niz;

}