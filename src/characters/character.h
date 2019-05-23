#pragma once

#include <iostream>

#include "types.h"

#ifndef CHARACTER_H
#define CHARACTER_H

namespace character {
	class Character {
	public:
		Character(int ID, std::string NAME, std::string CHARACTER_NAME, types type);
		std::string str();
	private:
		int ID;
		std::string NAME, CHARACTER_NAME;
		types type;
	};

	Character::Character(int ID, std::string NAME, std::string CHARACTER_NAME, types type) {
		this->ID = ID;
		this->NAME = NAME;
		this->CHARACTER_NAME = CHARACTER_NAME;
		this->type = type;
	}

	std::string Character::str() {
		
	}
};

#endif // !CHARACTER_H
