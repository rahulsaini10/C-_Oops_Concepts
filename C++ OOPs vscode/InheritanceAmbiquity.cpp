/// inheritance Ambiquity 


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class A
{
public:
    void fun()
    {
        cout << "A is called" << endl;
    }
};

class B
{
public:
    void fun()
    {
        cout << "B is called" << endl;
    }
};

class C : public A, public B
{
public:
};

int main()
{
    C obj;
    obj.A::fun();

    obj.B::fun();

    return 0;
}