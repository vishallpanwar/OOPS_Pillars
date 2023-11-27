#include <iostream>
using namespace std;


class human{             

    private:
    int height;

    public:
    int weight;

    private:
    int age;

    public:

    int getAge(){
        return this->age;
    }

    void setWeight(int w){
        this->weight=w;
    }
};

    // Male is child class

    class male:protected human{            

        public:

        string colour;

        void sleep(){
            cout<<"Male is sleeping";
        }
};

int main(){

    male m1;
    cout<<m1.height;
    
    return 0;
}