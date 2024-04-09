/// --> Deep Copy -> Deep copy is possible only with a user-defined copy constructor.

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Hero
{
public:
      int health;
      char level;
      int *power;

      /// default constructor
      Hero()
      {
            power = new int; /// new memory block for power pointer
      }

      /// parameterised constructor
      Hero(int a, char b, int c)
      {
            health = a;
            level = b;
            *power = c;
      }

      /// copy constructor

      Hero(Hero& h)
      {
            this->health = h.health;
            this->level = h.level;
            this->power = new int;
            *power = *(h.power);
      }
};

int main()
{
      Hero h1(14, 'C', 10);

      Hero h2 = h1;

      cout << h1.health << endl;
      cout << h1.level << endl;
      cout << h1.power << endl;

      cout << h2.health << endl;
      cout << h2.level << endl;
      cout << h2.power << endl;

      return 0;
}