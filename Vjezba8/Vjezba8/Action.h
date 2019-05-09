#ifndef ACTION_H
#define ACTION_H
#include "VideoGame.h"


using namespace std;


class Action : public VideoGame
{
public:
	
	string type() override;

private:

};


#endif // !ACTION_H

