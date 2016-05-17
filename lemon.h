#ifndef Lemon_h
#define Lemon_h
#include "Citrus.h"
class Lemon : public CitrusFruit {
public:
	Lemon(float ph) : CitrusFruit(ph) {}
	const char * getName();
	float getPh();
};
#endif
