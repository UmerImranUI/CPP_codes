#include <iostream>
using namespace std;

class Showroom{
    private:
    int num_showroom;
    int cars;
    public:
    string ca;
    
    
    Showroom(int n=0, int c=0){
        num_showroom=n;
        cars=c;
        
    }
    void setData(int n, int c){
        num_showroom=n;
        cars=c;
        
    }
    void tellMe(){
        cout<<"The number of cars are: "<<cars<<endl;
        cout<<"The number of Showroom are: "<<num_showroom<<endl;
    }
    void start(string ca){
        cout<<"The "<<ca<<" is starting"<<endl;
    }
};
class Car : public Showroom{
    public:


    
    Car(){}
    void selectCar(string ca){
        cout<<"the "<<ca<<" car is selected"<<endl;
        
    }
    
};

int main() {
    Showroom s1(2,50);
    s1.tellMe();   //Base Class Function
    Car c1;
    c1.selectCar("BMW");  //Derived Class function
    c1.start("BMW");    //Base Class Function


}