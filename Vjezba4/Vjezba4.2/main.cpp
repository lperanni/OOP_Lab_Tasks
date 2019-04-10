#include <iostream>
#include "Gun.h"
#include "Target.h"
#include <vector>
#include "../Vjezba4.1/Position.h"

using namespace std;

//Inicijira pocetne uvjete programa
vector<Target> initiate(int n) {

	vector<Target> mete;
	

	for (int i = 0; i < n; i++) {

		Target temp;
		temp.generateRandomTarget();

		mete.push_back(temp);
		
	}

	return mete;
}


int shootingRound(Gun shooter, vector<Target> targets){

	int targetsHit = 0;

	for (unsigned int i = 0; i < targets.size(); i++) {

		if (shooter.getPosition().getHeight() < targets[i].getPosition().getHeight() + targets[i].getHeight() && (shooter.getPosition().getHeight() > targets[i].getPosition().getHeight()) ){

			if (shooter.getBullets() == 0) {

				cout << "Reloading!" << endl;
				shooter.reload();
			}
			shooter.shoot();
			targets[i].shot();
			targetsHit++;
			cout << "Target Nr. " << i << " has been shot!" << endl;
		}

	}

	return targetsHit;

}

int main() {

	Gun pucac;

	pucac.setPosition();

	vector<Target> mete = initiate(30);

	int hits = shootingRound(pucac, mete);

	cout << hits << " targets have been hit!" << endl;


}