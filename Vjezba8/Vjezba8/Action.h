#ifndef ACTION_H
#define ACTION_H
#include "VideoGame.h"


using namespace OOP;



class Action : virtual public VideoGame
{
public:
	
	string type() override;

private:

};


#endif // !ACTION_H

