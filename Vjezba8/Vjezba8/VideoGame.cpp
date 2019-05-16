#include "VideoGame.h"
#include <iostream>

using namespace std;
using namespace OOP;


string VideoGame::type() {
	return "";
}

void VideoGame::addToPlatform(int index) {
	platforms.push_back(platform(index));
}

platform VideoGame::getPlatform(int index) {


	list<platform>::iterator it = platforms.begin();
	advance(it, index);
	return *it;
}

int VideoGame::getListSize() {
	return this->platforms.size();
}