#pragma once
//#include "Sounds.h"
//#include "Drawable.h"
#include "DrawableSounds.h"
#include <string>
#include <iostream>
using namespace std;
class Vehicle : public DrawableSounds
{
private:
	int age;
	string name;
public:
	Vehicle();
	Vehicle(const string & n, const int & a) : name(n), age(a) {};
	~Vehicle();
	void setName(const string & s)
	{
		name = s;
	}
	string getName() const
	{
		return name;
	}

	void setAge(const int & a)
	{
		age = a;
	}
	int getAge() const
	{
		return age;
	}
	void playSound()
	{
		cout << "Vehicle Sound, " << name.c_str() << endl;
	}
	void drawObject()
	{
		cout << "Drawing a vehicle, " << name.c_str() << endl;
	}
	void rotateObject()
	{
		cout << "Rotating a vehicle, " << name.c_str() << endl;
	}
};

