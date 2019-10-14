#include "hashtag.hpp"



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
