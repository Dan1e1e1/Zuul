#pragma once
#include <iostream>
#include <vector>
using namespace std;
class room {
 public:
  //constructor
  room(vector<room*> e);
  vector<room*> getExits();
 protected:
 //vector that stores the exits
  //char exit[6];
  vector<room*> exits;
};
