#include <iostream>

#include "Position.h"


void Position::setParams(double length, double height, double width) {
	this->height = height;
	this->length = length;
	this->width = width;
}

void Position::setRandParams(int start, int end) {

	this->height = start + (std::rand() % (end - start + 1));
	this->width = start + (std::rand() % (end - start + 1));
	this->length = start + (std::rand() % (end - start + 1));
}

double Position::getHeight() { return this->height; }
double Position::getWidth() { return this->width; }
double Position::getLength() { return this->length; }

double Position::calcDistance2d(Position b) {

	return sqrt(pow(this->width - b.width, 2) + pow(this->length - b.length, 2));

}

double Position::calcDistance3d(Position b) {

	return sqrt(pow(this->width - b.width, 2) + pow(this->length - b.length, 2) + pow(this->height - b.height, 2));

}