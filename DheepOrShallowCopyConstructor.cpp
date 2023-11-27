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

    void setname(char name[]){
        strcpy(this->name, name);
    }
};

int main(){

    hero hero1;
    hero1.sethealth(12);
    hero1.setlevel('A');
    char name[6]="Vishal";
    hero1.setname(name);
    hero1.print();
}