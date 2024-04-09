/////  Inheritance basics

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/// parent class/super class
class human
{
public:
    int height;
    int weight;
    int age;
};

/// sub class/ child class
class male : public human
{
public:
    string color;
    void sleep()
    {
        cout << "male sleeping" << endl;
    }
};

int main()
{

    male m;
    m.height = 6;
    m.weight = 70;
    m.age = 21;
    m.color = "blue";

    cout << m.height << endl;
    cout << m.weight << endl;
    cout << m.age << endl;
    cout << m.color << endl;

    return 0;
}