
#ifndef Roller_h
#define Roller_h
#include <string>
#include <iostream>
#include "Pen.h"

class RollerBallPen : public Pen {
public:
	RollerBallPen(std::string pen_name)
		: Pen(pen_name) {}
	RollerBallPen() : Pen(std::string("RollerBallPen")) {}
	virtual std::string drawLine();

	virtual std::string drawCircle();
};
#endif
