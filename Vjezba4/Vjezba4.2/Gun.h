#ifndef GUN_H
#define GUN_H

#include "../Vjezba4.1/Position.h"

using namespace std;

class Gun
{

private:

	int bullets = 6;
	Position polozaj;

public:

	const void shoot();
	const void reload();
	const void setPosition();
	Position getPosition();
	const int getBullets();
	

};


#endif // !GUN_H
