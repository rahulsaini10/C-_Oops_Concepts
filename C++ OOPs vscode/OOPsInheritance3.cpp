/// Multiple Inheritance

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Human
{
public:
    void sleep()
    {
        cout << " Human is sleeping " << endl;
    }
};

class Male
{

public:
    void sleep1()
    {
        cout << "Male is sleeping" << endl;
    }
};

class female : public Human, public Male
{
public:
    void sleep2()
    {
        cout << "female is sleeping" << endl;
    }

    female()
    {
        cout << "rdoajasfss" << endl;
    }
};

int main()
{

    female f;
    f.sleep();
    f.sleep1();
    f.sleep2();

    return 0;
}