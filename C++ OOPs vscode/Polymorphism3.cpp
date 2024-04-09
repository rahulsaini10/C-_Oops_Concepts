/// Runtime Polymorphism -> Method Overriding / Virtual function

/// Method Overriding can occur through Inheritance Only.

// rule for method overriding
// 1. same name(parent class and child class)
// 2. same parameters(parent class and child class)
// occur only with inheritance.

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Parent
{
public:
    void show()
    {
        cout << "Inside parent class" << endl;
    }
};

class subclass1 : public Parent
{

public:
    void show()
    {
        cout << "Inside Subclass1" << endl;
    }
};

class subclass2 : public Parent
{
public:
    void show()
    {
        cout << "inside Subclass2" << endl;
    }
}; 

int main()
{
    subclass1 P;
    subclass2 S;
    P.show();
    S.show();

    return 0;
}