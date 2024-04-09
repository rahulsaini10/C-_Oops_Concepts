#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/// ->> static and dynammic allocation

class hero
{
public:
    int health;
    char level;
};

int main()
{
    /// static allocation of object
    hero ramesh; // -> iski memory stack me allocate hogi

    ramesh.health = 100;
    ramesh.level = 'A';

    cout << ramesh.health << endl;
    cout << ramesh.level << endl;

    /// dynammic allocation of object
    hero *b = new hero; // -> iski memory heap me allocate hogi

    b->health = 100;
    b->level = 'A';

    cout << (*b).health << endl; //-> ye ek method h access karne ka
    cout << (*b).level << endl;  //
    cout << b->health << endl;   // ->  ye ek method h access karne ka
    cout << b->level << endl;    //

    return 0;
}