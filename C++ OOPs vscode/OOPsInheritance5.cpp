//// --> Hybrid Inheritance

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class A
{
    public:
    void sleep()
    {
        cout << "sosa" << endl;
    }
};

class B : public A
{
    public:
    void sleep1()
    {
        cout << "sosasa" << endl;
    }
};

class D
{
    public:
    void sleep2()
    {
        cout << "soiar" << endl;
    }
};

class C : public A, public D
{
    public:
    void sleep3()
    {
        cout << "sdsdfslfs" << endl;
    }
};

int main()
{

    C obj;
    obj.sleep();
    obj.sleep2();
    obj.sleep3();
    obj.sleep();

    return 0;
}