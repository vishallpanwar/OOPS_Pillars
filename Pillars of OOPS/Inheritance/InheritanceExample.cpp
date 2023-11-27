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

    // Yha age, name and height male class me present nhi hai pr fir bhi hm usko access kr paa rhe hai, this is due to inheritance
    male object;
    
    cout<<object.age<<endl;

    object.setWeight(100);
    cout<<object.weight<<endl;

    cout<<object.height<<endl;
    cout<<object.colour<<endl;
    object.sleep(); 

    return 0;
}