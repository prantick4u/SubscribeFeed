#include <iostream>
#include "subscribers.hpp"
#include "hashtag.hpp"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    HashTag ht;
    User1 obj1("Usr1",&ht);
    User2 obj2("Usr2",&ht);
    ht.SetLine("Testing My observer model design");
    return 0;
}
