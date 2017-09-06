#include "liby/rectangley.h"

Rectangley::Rectangley()
: Shapey(0, 0) {
}

Rectangley::Rectangley(int width, int height)
: Shapey(width, height) {
}

int Rectangley::getArea() {
	return _width * _height;
}
