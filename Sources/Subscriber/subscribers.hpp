#pragma once
#include "hashtag.hpp"
#include <string>
#include <iostream>

using namespace std;
class HashTag;
class Subscriber
{
private:
    HashTag* ObjHT;
    string m_name;
public:
    Subscriber(string Name, HashTag* Objht);
    virtual ~Subscriber(){
        //dummy
    }
    virtual void Update()=0;
protected:
    HashTag* GetHT();
    string GetName();
};

class User1:public Subscriber{
public:
    User1(string usr1, HashTag* objht):Subscriber(usr1, objht)
    {

    }
    void Update();
    
};

class User2:public Subscriber{
public:
    User2(string usr2, HashTag* objht):Subscriber(usr2, objht)
    {

    }
    void Update();
};
