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
    hero ramesh;

}