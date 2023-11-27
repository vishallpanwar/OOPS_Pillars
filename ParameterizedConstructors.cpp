#include <iostream>
using namespace std;

class hero{

    // Properties
    private:
    int health;

    public:
    char level;

    hero(){
        cout<<"Constructor called: "<<endl;
    }

    // Parameterized constructor
    hero(int health){
        cout<<"this-> "<<this<<endl;
        this->health=health;
    }

    void print(){
        cout<<level<<endl;
    }

    int gethealth(){
       return health;
    }

    int getlevel(){
        return level;
    }

    int sethealth(int h){
        health=h;
    }

    int setlevel(char ch){
        level=ch;
    }
};

int main(){
    
    // Object created statically
    hero ramesh(70);
    cout<<"Address of Ramesh: "<<&ramesh<<endl;
    ramesh.gethealth();

    // Dynamically
    hero *h=new hero(11);

}