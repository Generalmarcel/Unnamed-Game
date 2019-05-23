#pragma once

#include "character.h"
#include "types.h"

#include <iostream>

#ifndef IJN_BB_SEINARUHI
#define IJN_BB_SEINARUHI

class Seinaruhi {
public:
	Seinaruhi();
	std::string str();

private:
	humanoid::ship::Ship *seinaruhi;
};

Seinaruhi::Seinaruhi() {
	this->seinaruhi = new humanoid::ship::Ship(0xFF, new humanoid::Character("Miku", "Haruku"), "Seinaruhi", types::bb);
}

std::string Seinaruhi::str() {
	return this->seinaruhi->str();
}

#endif // !IJN_BB_SEINARUHI
