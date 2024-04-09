/// --> Hierarchical Inheritance

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class human
{
public:
    void sleep()
    {
        cout << " a sleeping" << endl;
    }

    human()
    {
        cout << "asfsoifsda" << endl;
    }
};

class male : public human
{
public:
    void sleep1()
    {
        cout << "b is sleeping" << endl;
    }
};

class female : public human
{
public:
    void sleep2()
    {
        cout << "c is sleeping" << endl;
    }

    female()
    {
        cout << "jklasfslk" << endl;
    }
};

int main()
{
    cout << "rahdi" << endl;

    female ob;
    ob.sleep2();
    ob.sleep();
    ob.sleep2();

    return 0;
}