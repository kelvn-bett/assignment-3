#include <iostream>
#ifndef Orange_h
#define Orange_h 
#include "Citrus.h"

class Orange : public CitrusFruit {
public:
	Orange(float ph) : CitrusFruit(ph) {}
	const char * getName();
	float getPh();
};

#endif