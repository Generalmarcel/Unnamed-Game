#pragma once

#include <iostream>
#include <sstream>

#include "types.h";

#ifndef CHARACTER_H
#define CHARACTER_H

namespace humanoid {
	class Character {
	public:
		Character(std::string first_name, std::string name);

		//Create string conversion
		std::string str();
	private:
		std::string first_name, name;
	};

	Character::Character(std::string first_name, std::string name) {
		this->first_name = first_name;
		this->name = name;
	}

	std::string Character::str() {
		return first_name + " " + name;
	}

	namespace ship {
		class Ship {
		public:
			Ship(int id, Character *character, std::string vehicle_name, types::ship ship);

			//convert std::stringndkdife
			std::string str();
		private:
			Character *character;
			std::string vehicle_name;
			types::ship ship;
			int id;
		};

		Ship::Ship(int id, Character *character, std::string vehicle_name, types::ship ship) {
			this->id = id;
			this->character = character;
			this->vehicle_name = vehicle_name;
			this->ship = ship;
		}

		std::string Ship::str() {
			std::stringstream ss;
			ss << id;

			std::string type = to::asShip(this->ship);

			//return
			return character->str() + ", a " + type + " called " + vehicle_name + " has the ingame id: " + ss.str();
		}
	}

	namespace tank {
		class Tank {
		public:
			Tank(int id, Character *character, std::string vehicle_name);
		private:

		};
	}
	
	namespace plane {

	}
} 

#endif // !CHARACTER_H
