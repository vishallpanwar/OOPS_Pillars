// Private members ke case me get() and set() ka usekrte hai taki un private members ko main() me access kiya ja ske

#include<iostream>
using namespace std;

class hero{

    //Properties
    private:
    int health;


    public:
    char level;

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

    // Object creation
    hero vishal;
    cout<<"Vishal's health is : "<<vishal.gethealth()<<endl;

    cout<<"Size of vishal is : "<<sizeof(vishal)<<endl;

    // Use of setters
    vishal.sethealth(90);
    vishal.level='A';

    cout<<"Health is: "<<vishal.gethealth()<<endl;
    cout<<"Level is : "<<vishal.level;

    return 0;
}