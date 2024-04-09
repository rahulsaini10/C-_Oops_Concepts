// copy constructor

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class hero
{
public:
    int health;
    char level;

    // default constructor
    hero()
    {
        cout << "constructor is called" << endl; /// ye apne aap hat gaya/ramove jab copy constructor likhte h tab
    }

    /// parameterised constructor
    hero(int h, char ch)
    {
        cout << "rahul is checking is constructor called " << "  " << this << endl;
        this->health = h;
        this->level = ch;
    }

    void print()
    {
        cout << health << endl;
        cout << level << endl;
    }

    /// Copy Constructor
    hero(const hero &S)
    {
        cout << "called copy constructor" << endl;
        this->health = S.health;
        this->level = S.level;
    }
};

int main()
{
    hero S(70, 'A');
    S.print();



    hero R(S);
    R.print();
    
    

    return 0;
}