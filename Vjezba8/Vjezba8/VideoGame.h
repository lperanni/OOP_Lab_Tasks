#ifndef VIDEOGAME_H
#define VIDEOGAME_H

#include <list>


using namespace std;


enum platform {PC, PS4, XBOX};

class VideoGame
{
public:
	virtual string type();

private:

	list<platform> platforms;

};





#endif VIDEOGAME_H
