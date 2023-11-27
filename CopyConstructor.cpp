#include <iostream>
using namespace std;

class hero{

    // Properties
    private:
    int health;

    public:
    char level;

    hero(){
        cout<<"Simple constructor called: "<<endl;
    }

    // Parameterized constructor
    hero(int health){
        cout<<"this-> "<<this<<endl;
        this->health=health;
    }

    void print(){
        cout<<"Health : "<<this-> health<<endl;
        cout<<"level : "<<this-> level<<endl;
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

    hero suresh;
    suresh.sethealth(70);
    suresh.setlevel('C');
    suresh.print();

    // Ramesh ki sari details suresh me copy krdi using copy constructor
    hero ritesh(suresh);

    // Or, ritesh.health=suresh.health;
    //ritesh.level=suresh.level;........... Ek hi baat hai
}