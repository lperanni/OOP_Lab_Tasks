#include <iostream>
#include <time.h>
#include "Position.h"

using namespace std;




int main() {

	srand(time(NULL));

	Position a, b;

	a.setRandParams(5, 50);
	b.setRandParams(6, 90);

	cout << "2D Distance: " << a.calcDistance2d(b) << endl;

	cout << "3D Distance: " << a.calcDistance3d(b) << endl;


}