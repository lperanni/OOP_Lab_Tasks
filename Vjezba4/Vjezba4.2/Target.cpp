#include "../Vjezba4.1/Position.h"
#include "Target.h"

using namespace std;

const void Target::generateRandomTarget() {

	this->lowerLeftPoint.setRandParams(5, 100);
	this->width = 30;
	this->height = 30;
}

const double Target::getWidth() {
	return this->width;
}
const double Target::getHeight() {
	return this->height;
}
Position Target::getPosition() {
	return this->lowerLeftPoint;
}
const bool Target::isHit() {

	return this->hit;

}
void Target::shot() {

	this->hit = true;

}





