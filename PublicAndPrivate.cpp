#include<iostream>
using namespace std;

class Hero{

    // Properties
    // Public both class aur main() me use ho skta hai, both inside and outside the class
    public:
    int health;
    char level;
    
    void print(){
        cout<<level<<endl;
    }
};

int main(){

    // Creation of object
    Hero vishal;
    
    // Inko initialize krne se phle garbage value aa rhi thi
    vishal.health=90;
    vishal.level='A';

    cout<<"Vishal health is: "<<vishal.health<<endl;
    cout<<"Vishal level is: "<<vishal.level<<endl;

    return 0;

}