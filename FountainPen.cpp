#include "FountainPen.h"

std::string FountainPen::drawLine() {
	return getName().append(" draws a line.");
}
std::string FountainPen::drawCircle() {
	return getName().append(" draws a circle.");
}