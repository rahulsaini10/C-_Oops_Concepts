#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// /// ->>> Constructor and its types

class hero
{
public:
    int health;
    char level;
    /// constructor/ default constructor
    hero()
    {
        cout << "constructor is called" << endl;
    }

    /// parameterised constructor
    hero(int health, char level)
    {
        cout << "rahul" << endl;
        this->health = health;
        this->level = level;
    }

    void print(){
        cout<<health<<endl;
        cout<<level<<endl;
    }
};

int main()
{
    // object created statically
    hero ramesh;
    cout << "hello" << endl;
    ramesh.health = 70;
    ramesh.level = 'B';

    cout << ramesh.health << endl;
    cout << ramesh.level << endl;

    // object created dynammically
    hero *h = new hero;

    hero temp(100, 'C');
    temp.print();

    return 0;
}