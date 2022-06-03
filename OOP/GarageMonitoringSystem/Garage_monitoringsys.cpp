#include "car.h"
#include <iostream>
using namespace std;
int main()
{
    Car* garages[10];

    for(int i=0;i<10;i++)
    {
        garages[i]=NULL;
    }

    int menu_choice = 0;
    char temp_colour[10];
    int garage_number;

    while(menu_choice !=3)
    {
        cout<<"Enter 1 to put car in garage, 2 to remove it, 3 to quit";
        cin>>menu_choice;

        if(menu_choice==1){
            cout<<"The following garage is empty";

            for(int i = 0; i<10; i++){
                if (garages[i]== NULL){
                    cout<< (i+1)<<",";
                }
            }

            cout<<endl;
            cout<<"Enter garage number for car to occupy";
            cin>>garage_number;

            if(garages[garage_number-1]==NULL)
            {
                cout<<"Enter colour of car"<<endl;
                cin>>temp_colour;

                garages[garage_number-1]=new Car(temp_colour);
                cout<<"Colour is"<< garages[garage_number - 1] ->getColour()<<endl;

            }
            else{
                cout<<"That garage is not empty"<<endl;
            }
        }

        if(menu_choice == 2){
            cout<<"The following garage numbers are occupied"<<endl;
            for(int i=0; i<10;i++){
                if(garages[i]!=NULL){
                    cout<<(i+1)<<",";
                }
            }

            cout<<endl<<"Enter garage number to empty";
            cin>> garage_number;
            if(garages[garage_number-1]!=NULL){
                cout<<garages[garage_number-1]->getColour()<<"Car removed"<<endl;

                delete garages[garage_number-1];
                garages[garage_number-1]=NULL;
            }
            else{
                cout<<"That garage is unoccupied"<<endl;
            }
        }
    }

    for(int i=0;i<10;i++){
        if(garages[i]!=NULL){
            delete garages[i];
        }
    }
}