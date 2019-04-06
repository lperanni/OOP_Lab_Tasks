#ifndef GUN_H
#define GUN_H

#include "../Vjezba4.1/Position.h"

using namespace std;

class Gun
{

private:

	int bullets;
	const Position polozaj;

public:

	const void shoot();
	const void reload();


};


#endif // !GUN_H
