/****************************
**
**    subscribers.cpp
**    Author: Prantick4u
**
****************************/
#include "subscribers.hpp"

Subscriber::Subscriber(string Name, HashTag* Objht)
{
        ObjHT=Objht;
        m_name=Name;
        GetHT()->RegisterSubscbr(this);
}
HashTag* Subscriber::GetHT()
{
	return ObjHT;
}

string Subscriber::GetName()
{
        return m_name;
}

void User1::Update()
{
        cout<<GetName()<<"received from HashTag"<<GetHT()->GetLine()<<endl;
}

void User2::Update()
{
        cout<<GetName()<<"received from HashTag"<<GetHT()->GetLine()<<endl;;
}