/****************************
**
**    hashtag.hpp
**    Author: Prantick4u
**
****************************/
#pragma once
#include "subscribers.hpp"
#include <vector>
#include <string>
using namespace std;
class Subscriber;
class HashTag{
  string Trending;
  vector<Subscriber*> ListSubscbr;
public:
  string GetLine();
  void SetLine(string objLine);
  void RegisterSubscbr(Subscriber*);
  void Notify();
};
