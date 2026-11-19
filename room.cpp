#include <iostream>
#include <cstring>
#include <vector>
#include "room.h"
using namespace std;
//constructor
room::room(vector<room*> e) {
  exits = e;
}
vector<room*> room::getExits() {
  return exits;
}
