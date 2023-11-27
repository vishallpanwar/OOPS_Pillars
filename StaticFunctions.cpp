// Static ek aisa data member create krta hai jo class ko belong krta hai
// Isme data member ko access krne ke loye object bnane ki need nahi hoti

#include <iostream>
using namespace std;

class hero{

    // Properties
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete; // Agar objet nhi bhi bna rkha to isko access kr skte hai (Static keyword hai)

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

    static int random(){
        cout<<timeToComplete<<endl;
    }

    // Destructor
    ~hero(){
        cout<<"Destructor called"<<endl;
    }
};

int hero::timeToComplete=5;

int main(){

cout<<hero::timeToComplete<<endl;

cout<<hero::random()<<endl;

}