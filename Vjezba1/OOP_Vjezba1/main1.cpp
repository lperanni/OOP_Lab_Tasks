#include <iostream>
#include <iomanip>

using namespace std;


void findDuplicate(int* n_array, int array_len) {

	for (int outerCounter = 0; outerCounter < array_len; outerCounter++) {

		int duplicates = 1;

		for (int innerCounter = 0; innerCounter < array_len; innerCounter++) {

			if ((n_array[outerCounter] == n_array[innerCounter]) && (outerCounter != innerCounter)) {
				duplicates++;
			}
		}
		if (duplicates > 1) {
		 cout << n_array[outerCounter] << " is present " << duplicates << " times in this array" << endl;
		}
	}

}

int main() {

	int n = 0;

	cout << "Unesite velicinu niza -> ";

	cin >> n;

	int* niz = (int*)malloc(n * sizeof(int));

	cout << "Punite niz brojevima od 1-9 " << endl;

	for (int i = 0; i < n; i++) {

		cin >> niz[i];
	}

	findDuplicate(niz, n);
}