/****************************
**
**    hashtag.cpp
**    Author: Prantick4u
**
****************************/
#include "hashtag.hpp"

string HashTag::GetLine()
{
	return Trending;
}

void HashTag::SetLine(string objLine)
{
    Trending.append(objLine);
    Notify();
}

void HashTag::RegisterSubscbr(Subscriber* obj)
{
    ListSubscbr.push_back(obj);
}
void HashTag::Notify()
{
    for(auto i:ListSubscbr)
    {
        i->Update();
    }
}
