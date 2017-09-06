#ifndef SHAPEY_H_
#define SHAPEY_H_

class Shapey {

public:
	Shapey();
	Shapey(int width, int height);
	int width();
	void setWidth(int w);
	int height();
	void setHeight(int h);

protected:
	int _width;
	int _height;

};

#endif