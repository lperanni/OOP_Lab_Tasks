#ifndef RPG_H
#define RPG_H

#include "VideoGame.h"

using namespace OOP;

class RPG : virtual public VideoGame
{
public:
	string type() override;

private:

};



#endif // !RPG_H
