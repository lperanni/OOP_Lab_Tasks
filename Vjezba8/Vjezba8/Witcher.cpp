#include "Witcher.h"

Witcher::Witcher() {

	this->VideoGame::addToPlatform(0);
	this->VideoGame::addToPlatform(1);
	this->VideoGame::addToPlatform(2);
}

string Witcher::type() {
	return "RPG-OPENWORLD";
}