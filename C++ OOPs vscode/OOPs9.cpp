/// static function -> static function sirf static data member ko hi access kar sakte h.

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class hero
{

public:
    int health;
    char level;

    static int timetocomplete; // static data member

    static int random() /// static member function
    {
        return timetocomplete;
    }
};

int hero ::timetocomplete = 5;

int main()
{
    hero ramesh;

    ramesh.health = 100;
    ramesh.level = 'C';

    cout << hero ::timetocomplete << endl;

    cout << ramesh.health << endl;
    cout << ramesh.level << endl;

    cout << hero ::random() << endl;

    return 0;
}