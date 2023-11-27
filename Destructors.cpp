#include <iostream>
using namespace std;

class hero{

    // Properties
    private:
    int health;

    public:
    char *name;
    char level;

    hero(){
        cout<<"Simple constructor called: "<<endl;
        name =new char[100];
    }

    // Parameterized constructor
    hero(int health){
        cout<<"this-> "<<this<<endl;
        this->health=health;
    }

    void print(){
        cout<<endl;
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

    // Destructor
    ~hero(){
        cout<<"Destructor called"<<endl;
    }
};

int main(){
    
    // Statically
    hero a;
    
    // Dynamically
    hero *b=new hero();
    delete b;

    // Dynamic allocation ke liye destructor manually call krna pdta hai

    return 0;
}