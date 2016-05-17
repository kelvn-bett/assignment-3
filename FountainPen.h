#ifndef FountainPen_h
#define FountainPen_h
#include <string>
#include <iostream>
#include "Pen.h"

class FountainPen : public Pen {
public:
	FountainPen(std::string pen_name)
		: Pen(pen_name) {}
	FountainPen() : Pen(std::string("FountainPen")) {}
	virtual std::string drawLine();
	virtual std::string drawCircle();
};

#endif



/* class FountainPen : public Pen {
public:

FountainPen(std::string pen_name)
: Pen(pen_name) {}
FountainPen() : Pen(std::string("FountainPen")){}
virtual std::string drawLine();
virtual std::string drawCircle();
};
std::string FountainPen::drawLine(){
return getName().append(" draws a line.");
}
std::string FountainPen::drawCircle(){
return getName().append(" draws a circle.");
}*/