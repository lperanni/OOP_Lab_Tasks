#include "VideoGame.h"
#include "GodOfWar.h"
#include "Fallout4.h"
#include "LastOfUs2.h"
#include "DarkSouls.h"
#include "Witcher.h"
#include <iostream>
#include <vector>
#include "Counter.h"
#include <string>

int main(void)
{
	using namespace OOP;
	using namespace std;

	Counter c;



	VideoGame* v[] = { new Witcher, new DarkSouls, new Fallout4, new LastOfUs2, new GodOfWar };

	
	size_t sz = sizeof v / sizeof v[0];
	for (unsigned i = 0; i < sz; ++i)
		c.add(v[i]);

	std::cout << "Najzastupljenija platforma: " << c.mostFrequentPlatform();
	
	for (unsigned i = 0; i < sz; ++i)
		delete v[i];
}