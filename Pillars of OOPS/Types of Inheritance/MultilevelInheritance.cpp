// Animal ko DOg inherit kar raha hai and dog ko puppy inherit kar raha hai

#include<iostream>
using namespace std;


class Animal {

    public:
    int age;
    int weight;


    public:
    void speak() {
        cout << "Speaking " << endl;
    }
};

class Dog: public Animal {

};

class puppy:public Dog{
    
};


int main() {

    Dog d;
    d.speak();
    cout << d.age << endl;


    return 0;
}