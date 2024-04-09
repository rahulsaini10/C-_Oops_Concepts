#include <iostream>
#include <bits/stdc++.h>



/// getter & setter function to access the private data member

using namespace std;

class hero{
    // private data members (by default)
    int health;
    char level;

    public:
    int getHealth(){
        return health ;
    }

    void setHealth (int health){
        this-> health = health;
    }

    char getLevel(){
        return level;
    }

    void setLevel(char level){
        this-> level = level;
    }

};

int main()
{

    hero ramesh;
    ramesh.setHealth(100);
    ramesh.setLevel('A');

    cout<<ramesh.getHealth()<<endl;
    cout<<ramesh.getLevel()<<endl;
    

    return 0;
}