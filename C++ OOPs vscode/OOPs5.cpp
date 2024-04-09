//// parameterised constructor

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class hero
{
public:
  int health;
  char level;

  // constructor
  hero()
  {
    cout << "constructor is called" << endl;
  }

  /// parameterised constructor
  hero(int h, char ch)
  {
    cout << "rahul" <<this<< endl;
    this->health = h;
    this->level = ch;
  }

  void print()
  {
    cout << health << endl;
    cout << level << endl;
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