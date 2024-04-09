//// static keyword --> ye ek esa data member h jise access karne k liye object create nahi karna padta h kitni kamaal ki baat h hnaa.
///                        aur ise class k bahar intitialize karte h
///               syntax : -  datatype  classname :: datamember ka naaam = value;

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class hero
{
public:
    int health;
    char level;
    static int timetocomplete;
};

int hero :: timetocomplete = 5;

int main()
{
    hero ramesh;

    ramesh.health = 100;
    ramesh.level = 'C';

    cout << hero ::timetocomplete << endl; // --> no required object creation to access this data member

    cout << ramesh.health << endl;
    cout << ramesh.level << endl;

    return 0;
}