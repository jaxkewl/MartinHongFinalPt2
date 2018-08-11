#pragma once

class Sounds {

public:
	Sounds() {};
	virtual ~Sounds() {};

	virtual void playSound() = 0;
};