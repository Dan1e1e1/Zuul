#pragma once
#include <iostream>
#include <vector>
using namespace std;
class room {
 public:
  //constructor
  room(const char e[]);
  const char* getExits();
 protected:
 //vector that stores the exits
  vector<room*> exits;
};
