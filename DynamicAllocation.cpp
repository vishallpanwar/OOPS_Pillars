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

    // Static Allocation
    hero vishal;
    vishal.sethealth(80);
    vishal.setlevel('B');
    cout<<"Level is : "<<vishal.level<<endl;
    cout<<"Health is: "<<vishal.gethealth()<<endl;

    // Dynamic allocation
    hero *b=new hero;
    b->sethealth(90);
    b->setlevel('A');
    cout<<"Level is : "<<(*b).level<<endl;
    cout<<"Level is : "<<(*b).gethealth()<<endl;
    
    // Another way of dynamic allocation
    cout<<"Level is : "<<b->level<<endl;
    cout<<"Level is : "<<b->gethealth()<<endl;

    return 0;
}