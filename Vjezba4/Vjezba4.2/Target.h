#ifndef TARGET_H
#define TARGET_H

#include "../Vjezba4.1/Position.h"

using namespace std;

class Target
{

private:

	Position lowerLeftPoint;
	double width;
	double height;
	bool hit = false;			

public:

	const void generateRandomTarget();
	const double getWidth();
	const double getHeight();
	Position getPosition();
	const bool isHit();
	const void shot();
	
};


#endif // !TARGET_H
