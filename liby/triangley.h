#ifndef TRIANGLEY_H_
#define TRIANGLEY_H_

#include "liby/shapey.h"

class Triangley : public Shapey {
public:
	Triangley();
	Triangley(int width, int height);
	int getArea();
};

#endif