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

    class male:public human{     // Male is chile class

        public:

        string colour;

        void sleep(){
            cout<<"Male is sleeping";
        }
};

int main(){

    male m1;

    // Parent class me public thi nad child class me bhi public, so we can access it
    cout<<m1.height;
    
    return 0;
}