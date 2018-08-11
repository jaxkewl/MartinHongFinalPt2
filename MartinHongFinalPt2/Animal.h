#pragma once
//#include "Sounds.h"
//#include "Drawable.h"
#include "DrawableSounds.h"
#include <string>
#include <iostream>

using namespace std;

class Animal : public DrawableSounds
{

private:
	string name;
public:
	Animal();
	Animal(const string & n) : name(n) {};
	~Animal();
	void setName(const string & s)
	{
		name = s;
	}
	string getName() const
	{
		return name;
	}
	void playSound()
	{
		cout << "Animal Sound, " << name.c_str() << endl;
	}
	void drawObject()
	{
		cout << "Drawing an animal, " << name.c_str() << endl;
	}
	void rotateObject()
	{
		cout << "Rotating an animal, " << name.c_str() << endl;
	}
};

