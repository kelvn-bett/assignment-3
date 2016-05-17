#ifndef Pen_h
#define Pen_h
#include <iostream>
#include <string>

class Pen {
	std::string pen_name;
public:
	Pen(std::string pen_name = "Pen") {
		this->pen_name = pen_name;
	}
	std::string getName();
	virtual std::string drawLine();
	virtual std::string drawCircle();
};

#endif