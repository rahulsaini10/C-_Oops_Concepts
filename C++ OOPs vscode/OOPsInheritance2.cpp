/// --> Multi-Level Inheritance 



#include <iostream>
using namespace std;

class Human
{
    public:
    int height;
    int weight;
    int age;
};

class Male : public Human
{
public:
    string color;
    void sleep()
    {
        cout << " male sleeping" << endl;
    }
};

class female : public Male{
    public:
    string name;
    void dlep(){
        cout<<" female is sleeping"<<endl;
    }
};

class rahul : public female{
    public:
    string food;
    void laugh(){
        cout<<"rahul is laughing"<<endl;
    }
};

int main()
{
    rahul h;
    h.age = 21;
    h.weight = 70;
    h.height = 6;
    h.color = "blue";
    h.name ="neha";
    h.food = "dalbalti";

    cout << h.age << endl;
    cout << h.height << endl;
    cout << h.weight << endl;
    cout << h.color << endl;
    cout<<h.name<<endl;
   h.dlep();
   h.sleep();
   h.laugh();
    

    return 0;
}