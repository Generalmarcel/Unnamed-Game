#include "character.h"
#include <iostream>

using namespace std;

class Seinaruhi {
  public:
  Seinaruhi();
  character::Character c;
};

Seinaruhi::Seinaruhi() {
  this->c = new character::Character(ID, "Seinaruhi", "Miku Haruku");
};
