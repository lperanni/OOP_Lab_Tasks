#include <iostream>
#include <iomanip>


using namespace std;


void printNiz(int* n_array, int n) {

	for (int i = 0; i < n; i++) {
		cout << i + 1 << ". clan je - " << n_array[i] << endl;
	}
}


int& findMember(int* &n_array, int n) {

	for (int i = 0; i < n; i++) {
		if (((n_array[i] / 100) % 10) + (n_array[i] % 10) == 5) {

			return n_array[i];
		}
	}

	return n_array[n];
}

int main3() {

	int n;
	int temp;
	cout << "\t\t\t\t\t##########DOBRODOSLI##########" << endl;
	cout << "\t\t\t\t\t# Odaberi velicinu niza - ";
	cin >> n;


	int* n_array = (int*)malloc(n * sizeof(int));

	cout << "\t\t\t\t\t Unesite redom elemente niza a da pritom budu 4eroznamenkasti  " << endl;

	for (int i = 0; i < n; i++) {

		cout << i + 1 << ". clan - ";
		cin >> temp;
		if (temp < 1000 || temp >9999) {
			cout << "To nije troznamenkasti broj. Ponovi unos" << endl;
			i--;
		}
		else {
			n_array[i] = temp;
		}
	}

	printNiz(n_array, n);

	findMember(n_array, n)++;


	printNiz(n_array, n);
		
}