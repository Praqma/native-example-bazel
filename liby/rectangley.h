#ifndef RECTANGLEY_H_
#define RECTANGLEY_H_

#include "liby/shapey.h"

class Rectangley : public Shapey {
public:
	Rectangley();
	Rectangley(int width, int height);
	int getArea();
};

#endif