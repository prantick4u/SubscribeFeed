#pragma once
#include "hashtag.hpp"

class Subscriber
{
private:
    HashTag* ObjHT;
    string m_name;
public:
    Subscriber(string Name, HashTag* Objht)
    {
        ObjHT=Objht;
        m_name=Name;
        GetHT()->RegisterSubscbr(this);
    }
    virtual ~Subscriber(){
        //dummy
    }
    virtual void Update()=0;
protected:
    HashTag* GetHT()
    {
        return ObjHT;
    }
    string GetName()
    {
        return m_name;
    }
};

class User1:public Subscriber{
public:
    User1(string usr1, HashTag* objht):Subscriber(usr1, objht)
    {

    }
    void Update()
    {
        cout<<GetName()<<"received from HashTag"<<GetHT()->GetLine().substr(1);
    }
};

class User2:public Subscriber{
public:
    User2(string usr2, HashTag* objht):Subscriber(usr2, objht)
    {

    }
    void Update()
    {
        cout<<GetName()<<"received from HashTag"<<GetHT()->GetLine().substr(2);
    }
};
