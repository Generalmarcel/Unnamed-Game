#include "character.h"
#include "type.h"

character::Character *create() {
  character::Character *seinaruhi = new character::Character(0xFF, "Seinaruhi", "Miku Haruku", type::bb);
  return seinaruhi;
}

bool build() {
  //building function
}

bool receive() {
  //received after fighting
}

bool bought() {
  //bought in shop
}
