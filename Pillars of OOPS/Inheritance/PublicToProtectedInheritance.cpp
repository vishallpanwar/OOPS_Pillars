#include <iostream>
using namespace std;

class human{             // Human is a parent class

    public:
    
    int height;
    int weight;
    int age;

    public:

    int getAge(){
        return this->age;
    }

    void setWeight(int w){
        this->weight=w;
    }
};
     
    // This is the way to write inheritance relation

    class male:protected human{     // Male is chile class

        public:

        string colour;

        void sleep(){
            cout<<"Male is sleeping";
        }
};

int main(){

    male m1;

    // Parent class me public thi and child class me bhi protected, so we cannot access it. Height access krne ke liye child class me getter lgana pdega
    cout<<m1.height;
    
    return 0;
}