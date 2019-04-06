#include "../Vjezba4.1/Position.h"
#include "Gun.h"

using namespace std;


const void Gun::shoot() {this->bullets -= 1;}	

const void Gun::reload() { this->bullets = 6; }




