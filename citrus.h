#ifndef Citrus_h
#define Citrus_h
#include <iostream>
class CitrusFruit {
protected:
	float ph;
public:
	CitrusFruit(float ph) : ph(ph) {}
	const char * getName();
	float getPh();
};
#endif