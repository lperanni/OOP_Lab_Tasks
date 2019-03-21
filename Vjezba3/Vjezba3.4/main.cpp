#include <iostream>
#include <string>
#include <vector>
#include <time.h>


using namespace std;

typedef struct _Player {
		
	string name;
	int index;
	bool aiOrNot;
	void addPlayer(int index) {

		char temp;

		cout << "\nPlayer " << index <<endl;
		cout << "Enter name: ";
		cin >> this->name;
		this->index = index;

		cout << "\nIs the player a computer or not(y/n): ";
		cin >> temp;

		while (temp != 'y' && temp != 'n') {
			cout << "\n\nPogresan odabir. Ponovite: ";
			cin >> temp;
		}

		if (temp == 'y') {
			aiOrNot = true;
		}
		else {
			aiOrNot = false;
		}
		 
	}

}player;

typedef struct _Game {

	vector<int> matches;
	bool gameState;
	void turn(int count) {
		for (int i = 0; i < count; i++) {
			matches.push_back(1);
		}

		if (matches.size() >= 21) {
			gameState = true;
		}

	}
	void newGame() {
		this->gameState = false;
		this->matches = {};
		srand(time(NULL));
	}

}game;

int main() {

	int playerCount;

	cout << "\t\t\t\t\t\t####MATCH GAME####\n\n" << endl;
	cout << "\t\t\t\t\tEnter the number of players: ";
	cin >> playerCount;


	player* players = new player[playerCount];

	for (int i = 0; i < playerCount; i++) {
		players[i].addPlayer(i);
	}

	game match;
	match.newGame();
	int temp;
	

	while (match.gameState == false) {

		cout << "\n\nRemaining matches = " << 21 - match.matches.size() << endl;
		
		cout << "Choose 1, 2 or 3 matches!" << endl;
		for (int i = 0; i < playerCount; i++) {
			if (players[i].aiOrNot == false) {

				cout << players[i].name << ": ";						//Unos za ljudskog igraca
				cin >> temp;

				if (temp < 1 || temp > 3) {
				cout << "\n\nPogresan unos. Ponovite" << endl;
				i--;
				break;
				}
			}
			else {
				temp = (rand() % 3) + 1;								//Potez za kompjutera
				cout << players[i].name << ": " << temp << endl;
			}
			
			match.turn(temp);

			if (match.gameState == true) {
				cout << players[i].name << " has lost the game!" << endl;
				break;
			}
		}
	}



}