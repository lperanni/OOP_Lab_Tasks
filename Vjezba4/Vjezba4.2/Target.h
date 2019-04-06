#ifndef TARGET_H
#define TARGET_H

#include "../Vjezba4.1/Position.h"

using namespace std;

class Target
{

private:

	Position lowerLeftPoint;
	int width;
	int height;
	bool hit;			

public:

	const void generateRandomTarget();

};


#endif // !TARGET_H
