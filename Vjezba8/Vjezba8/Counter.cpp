#include "Counter.h"


void Counter::add(VideoGame* game) {

	for (int i = 0; i < game->getListSize(); i++) {

		switch (game->getPlatform(i)) {

		case 0:
			this->pcCount += 1;
			break;
		case 1:
			this->ps4Count += 1;
			break;
		case 2:
			this->xboxCount += 1;
			break;
		}

	}


}

std::string Counter::mostFrequentPlatform() {
	
		

	if (pcCount >= ps4Count && pcCount >= xboxCount)
	{
		return "PC";
	}

	if (ps4Count >= pcCount && ps4Count >= xboxCount)
	{
		return "PS4";
	}

	if (xboxCount >= pcCount && xboxCount >= ps4Count) {
		
		return "XBOX";
	}

	return "Nintendo Switch";


}