#include <iostream>

#ifndef POSITION_H
#define POSITION_H
using namespace std;




class Position
{
private:
	double x;
	double y;
	double z;

public:
	void setParams(double length = 0, double height = 0, double width = 0);
	void setRandParams(double start, double end);
	double getHeight();
	double getWidth();
	double getLength();
	double calcDistance2d(Position b);
	double calcDistance3d(Position b);

};

#endif // !POSITION_H