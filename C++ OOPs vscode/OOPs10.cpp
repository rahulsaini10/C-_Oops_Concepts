///->  shallow copy --> default copy constructor shallow copy karta h .

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Hero
{
public:
    int health;
    char level;

    Hero()
    {
        cout << "constructor called" << endl;
    }

    Hero(int a, int b)
    {
        health = a;
        level = b;
    }
};

int main()
{

    Hero h1(100, 'A');

    cout << h1.health << endl;
    cout << h1.level << endl;

    Hero h2 = h1;
    cout << h2.health << endl;
    cout << h2.level << endl;

    Hero h3 = h1;
    cout << h3.health << endl;
    cout << h3.level << endl;

    return 0;
}
