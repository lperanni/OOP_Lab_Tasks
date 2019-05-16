#ifndef OPENWORLD_H
#define OPENWORLD_H
#include "VideoGame.h"

using namespace OOP;

class OpenWorld : virtual public VideoGame
{
public:
	string type() override;

private:

};



#endif // !OPENWORLD_H
