#ifndef WITCHER_H
#define WITCHER_H
#include "OpenWorld.h"
#include "RPG.h"

class Witcher : public OpenWorld, public RPG
{
public:
	
	Witcher();
	string type() override;

private:

};



#endif // !WITCHER_H
