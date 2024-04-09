#include <iostream>
#include <bits/stdc++.h>

/// Operator Overloading
using namespace std;

class B
{
public:
    int a;
    int b;

public:
    int add()
    {
        return a + b;
    }

    void operator+(B &obj1)
    {
        int value1 = this->a;
        int value2 = obj1.a;
        cout << "output  --> " << value2 - value1 << endl;
    }
};

int main()
{
    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;

    return 0;
}