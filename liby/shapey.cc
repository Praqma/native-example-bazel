#include "liby/shapey.h"

Shapey::Shapey() 
: _width(0), _height(0) {
}

Shapey::Shapey(int width, int height)
: _width(width), _height(height) {
}

int Shapey::width() {
	return _width;
}

void Shapey::setWidth(int w) {
	_width = w;
}

int Shapey::height() {
	return _height;
}

void Shapey::setHeight(int h) {
	_height = h;
}