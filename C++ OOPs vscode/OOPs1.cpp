#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// class and objects

class Hero
{
public:
    int health; // data member
    char level; /// data member
};

int main()
{
    /// object create
    Hero ramesh;

    // hero type ki class ko ramesh naam ka object dot(.) operator se access kar rahe h
    ramesh.health = 100;
    ramesh.level = 'A';

    cout << ramesh.health << endl; // o/p -> 100
    cout << ramesh.level << endl;  // o/p -> A

    return 0;
}