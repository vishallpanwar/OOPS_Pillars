// Polymorphism (Compile time)

#include <iostream>
using namespace std;

class A{

    public:

    void sayHello(){
        cout<<"Hello Vishal bhai"<<endl;
    }
    
    // Same name se dusra function call kr skte hai, only condition is parameters should be different

    void sayHello(string name){
        cout<<"Hello "<<name<<endl;
    }
};

int main(){

    A obj;
    obj.sayHello();


    return 0;
}