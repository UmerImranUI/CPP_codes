// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
const int RED = 1;
const int GREEN = 2;

class TrafficLight{
    private:
    int colour;
    
    public:
    TrafficLight();
    void changeColour();
    void showColour();
  
    
};

TrafficLight::TrafficLight()
{
    colour = RED;
}

void TrafficLight::changeColour()
{
    if(colour == RED){
        colour = GREEN;
    }else{
        colour = RED;
    }
}

void TrafficLight::showColour()
{
    if(colour == RED){
        cout<<"RED"<<endl;
    
    }
    else{
        cout<<"GREEN"<<endl;
    }
}
TrafficLight external_light;

int main() {
    external_light.changeColour();
    for(int i = 0; i<2; i++){
        cout<<"times the loop has executed :"<<i<<endl;
        TrafficLight automatic_light;
        
        automatic_light.changeColour();
        
        static TrafficLight static_light;  
        // Static object retains its current state.
        
        static_light.changeColour();
        // first time when the first loop is executed it will have green
        // then by retaining its state, the second time when the loop get
        // executed the colour is not green, it will be red. 
        cout<<"The automatic light is :";
        automatic_light.showColour();
        cout<<"The static light is :";
        static_light.showColour();
    }
    cout<<"The external light is"<<endl;
    external_light.showColour();

    return 0;
}