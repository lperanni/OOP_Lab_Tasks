#include "../Vjezba4.1/Position.h"
#include "Gun.h"


using namespace std;


const void Gun::shoot() {this->bullets -= 1;}	

const void Gun::reload() { this->bullets = 6; }

const void Gun::setPosition() {

	this->polozaj.Position::setRandParams(5, 50);
}

Position Gun::getPosition() {

	return this->polozaj;
}

const int Gun::getBullets() {

	return this->bullets;
}




