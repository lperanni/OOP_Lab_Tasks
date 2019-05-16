#ifndef COUNTER_H
#define COUNTER_H


#include "VideoGame.h"
#include <string.h>

using namespace OOP;

class Counter
{
public:
	
	void add(VideoGame* game);
	std::string mostFrequentPlatform();

private:

	int ps4Count = 0;
	int pcCount = 0;
	int xboxCount = 0;

};



#endif // !COUNTER_H
