#include <iostream>
#include <cstring>
#include "room.h"
room::room(const char* e[]) {
  strcpy(exits, e);
}
const char room::getExits() {
  return exits;
}
