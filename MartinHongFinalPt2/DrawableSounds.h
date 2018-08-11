#pragma once

#include "Drawable.h"
#include "Sounds.h"

class DrawableSounds : public Drawable, public Sounds
{
public:
	virtual void drawObject() = 0;
	virtual void rotateObject() = 0;
	virtual void playSound() = 0;

};