#include "car.h"
#include <iostream>
using namespace std;
int main()
{
    Car* garage = NULL;

    int menu_choice = 0;
    char temp_colour[10];

    while(menu_choice !=3){

        cout<<"Enter 1 to put car in garage, 2 to remove it, 3 to quit"<<endl;
        cin>>menu_choice;

        if(menu_choice == 1 && garage == NULL){
            cout<<"Enter colour of car"<<endl;
            cin>>temp_colour;
            garage = new Car(temp_colour);
            cout<<"Colour is"<<garage->getColour()<<endl;
        }

        if(menu_choice == 2 && garage != NULL){
            delete garage;

            garage = NULL;
            cout<<"Car removed"<<endl;

        }
    }

    if(garage != NULL){
        delete garage;
    }

}