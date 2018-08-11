// MartinHongFinalPt2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Animal.h"
#include "Vehicle.h"
#include <iostream>
#include <vector>
#include "DrawableSounds.h"
#include "Drawable.h"
#include "Sounds.h"

using namespace std;

int main()
{
	Animal *a1 = new Animal("pig");
	Animal *a2 = new Animal("horse");
	Vehicle * v1 = new Vehicle("Honda", 1);
	Vehicle * v2 = new Vehicle("Mazda", 4);

	DrawableSounds* list[4];
	list[0] = a1;
	list[1] = a2;
	list[2] = v1;
	list[3] = v2;

	for (int i = 0; i < 4; i++)
	{
		list[i]->playSound();
		list[i]->rotateObject();
		list[i]->drawObject();
		cout << endl;
	}


	return 0;
}

