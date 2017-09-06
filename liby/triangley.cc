#include "liby/triangley.h"

Triangley::Triangley()
: Shapey(0, 0) {
}

Triangley::Triangley(int width, int height)
: Shapey(width, height) {
}

int Triangley::getArea() {
	return (_width * _height) / 2;
}
