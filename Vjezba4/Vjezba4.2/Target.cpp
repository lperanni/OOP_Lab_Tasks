#include "../Vjezba4.1/Position.h"
#include "Target.h"

using namespace std;

const void Target::generateRandomTarget() {

	this->lowerLeftPoint.setRandParams(5, 100);
	this->width = 30;
	this->height = 30;
}




