#include <iostream>
#include <vector>
#include "room.h"
using namespace std;
int main() {
  vector<room*> exits;
  room* exit = new room(exits);
  exits.push_back(exit);
  exit.push_back("west");
  for (int i = 0; i < exits.size(); i++) {
    exits[i]->getExits();
  }
  cout << "called main";
}
