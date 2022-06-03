#include<iostream>
using namespace std;

enum week{
    Sunday, Monday, Wednesday, Thursday, Friday, Saturday
    //0,      1,       2,         3,      4,         5
};

int main(){
    week currentday;
    currentday=Wednesday;

    cout<<"\nDay"<<currentday;
    cout<<"\nDay"<<currentday+1;

    return 0;
}