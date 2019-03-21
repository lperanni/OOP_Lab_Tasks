#include <iostream>
#include <string>

using namespace std;

void fixString(string &toFix) {

	for (unsigned int i = 0; i < toFix.size(); i++) {
		if ((toFix[i] == ',' || toFix[i] == '.') && (toFix[i + 1] != ' ')) {
			toFix.insert(i + 1, " ");
		}
	}
	for (unsigned int i = 0; i < toFix.size(); i++) {
		if ((toFix[i] == ',' || toFix[i] == '.') && (toFix[i - 1] == ' ')) {
			toFix.erase(i - 1, 1);
		}
	}

}

int main() {

	string test = "ja bih,ako ikako mogu , ovu recenicu ispisao ispravno .";

	fixString(test);

	cout << test << endl;

}