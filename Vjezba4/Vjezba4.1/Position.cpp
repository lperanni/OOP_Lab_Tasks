#include <iostream>

#include "Position.h"


void Position::setParams(double length, double height, double width) {
	this->y = height;
	this->x = length;
	this->z = width;
}

void Position::setRandParams(double start, double end) {

	this->y = start + (std::rand() % (int)(end - start + 1));
	this->z = start + (std::rand() % (int)(end - start + 1));
	this->x = start + (std::rand() % (int)(end - start + 1));
}

double Position::getHeight() { return this->y; }
double Position::getWidth() { return this->z; }
double Position::getLength() { return this->x; }

double Position::calcDistance2d(Position b) {

	return sqrt(pow(this->y - b.y, 2) + pow(this->x - b.x, 2));

}

double Position::calcDistance3d(Position b) {

	return sqrt(pow(this->z - b.z, 2) + pow(this->x - b.x, 2) + pow(this->y - b.y, 2));

}