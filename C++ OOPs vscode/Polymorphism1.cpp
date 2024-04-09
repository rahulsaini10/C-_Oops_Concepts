// polomorphism --> many forms
// two types of polymorphism
// 1. Compile Time polymorphism/ Static Polymorphism
// 2. Runtime polymorphism / Dynammic Polymorphism
// Compile Time polymorphism --> 1. Function Overloading
//                               2. Operator Overloading

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
  

 /// funtion overloading
 
int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    int a, b, c;
    cout << add(2, 3)<<endl;

    cout << add(1, 2, 3)<<endl;

    return 0;
}