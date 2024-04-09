#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class hero{

    public:
        int health;
        char level;
        //Destructor
        ~hero(){
            cout<<"Destructor is called"<<endl;
        }


};

int main(){
    // statically allocation
    hero ramesh; /// --> automatically called dustuctor in statically allocation

    // dynammically allocation 
    hero * b = new hero();
    delete b; // --> manually called destructor in dynammically allocation

      return 0;
}