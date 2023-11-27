#include<iostream>
using namespace std;

class Hero{

    // Properties
    // Public both class aur main() me use ho skta hai, both inside and outside the class
    public:
    int health;
    
    // Private bs class ke and hi use kr skte hai, not outside the class
    private:
    char level;

};

int main(){

    // Creation of object
    Hero vishal;

    cout<<"Vishal health is: "<<vishal.health<<endl;
    cout<<"Vishal level is: "<<vishal.level<<endl;

    return 0;

}