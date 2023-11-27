#include<iostream>
using namespace std;

class A{

    public:
    
    void fun1(){
        cout<<"Inside function 1";
    }
};

class B:public A{

    public:
    
    void fun2(){
        cout<<"Inside function 2";
    }
};

class c:public A{

    public:
    
    void fun3(){
        cout<<"Inside function 3";
    }
};

int main(){

    A object1;
    object1.fun1();
    cout<<endl;

    B object2;
    object2.fun1();
    cout<<endl;
    object2.fun2();
    cout<<endl;

    B object3;
    object3.fun1();
    cout<<endl;
    object3.fun2();
    cout<<endl;
    
    return 0;
}