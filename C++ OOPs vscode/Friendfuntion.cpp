// Friend Function --> A class's friend function is defined outside that class's scope, but it has the right to access all private and protected members of the class.
//                    Friend function are not member funciton
//                    A  friend function in c++ is a function that is preceded by the keyword "friend".

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Rectangle
{
public:
    int length;
    Rectangle()
    {
        length = 10;
        cout<<endl<<"length of the rectangle"<<endl;
    }
    friend int printLength(Rectangle);

};

int printLength(Rectangle b)
{
    b.length += 10;
    return (b.length);
}

int main()
{
    Rectangle b;
    cout << "Length of Rectangle : " << printLength(b) <<endl;


    
}