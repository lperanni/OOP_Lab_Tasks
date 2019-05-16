#ifndef VIDEOGAME_H
#define VIDEOGAME_H

#include <list>


using namespace std;

namespace OOP {

	enum platform { PC, PS4, XBOX };

	class VideoGame
	{
	public:
		virtual string type();
		void addToPlatform(int index);
		platform getPlatform(int index);
		int getListSize();
		~VideoGame() {
			
		};

	private:

		list<platform> platforms;

	};



}

#endif VIDEOGAME_H
