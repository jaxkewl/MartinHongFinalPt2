#pragma once

class Drawable
{
public:
	Drawable() {};
	virtual ~Drawable() {};
	virtual void drawObject() = 0;
	virtual void rotateObject() = 0;


};