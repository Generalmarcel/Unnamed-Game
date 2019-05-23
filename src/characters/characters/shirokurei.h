#pragma once

#include "character.h"
#include "types.h"

#include <iostream>

#ifndef IJN_CV_SHIROKUREI
#define IJN_CV_SHIROKUREI

class Shirokurei {
public:
	Shirokurei();
	std::string str();

private:
	humanoid::ship::Ship *shirokurei;
};

Seinaruhi::Seinaruhi() {
	this->seinaruhi = new humanoid::ship::Ship(0x100, new humanoid::Character("Miku", "Haruku"), "Shirokurei", types::cv);
}

std::string Shirokurei::str() {
	return this->shirokurei->str();
}

#endif // !IJN_CV_SHIROKUREI
