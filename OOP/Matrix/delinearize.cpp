#include <iostream>
using namespace std;
#define MAX_N 100



int main()
{
    int c[MAX_N] = {35, 23 , 56 , 30};
    int b[2][2];

    int i,j,k,l;
    cout<<"1D array is: "<<endl;
    for(i=0;i<4;i++)
    { cout << c[i]<<" ";}
    cout << endl;
    cout << endl;
    cout<<"2D array is: "<<endl;

    for(i=0;i<2;i++)
    {   for(j=0;j<2;j++)
         {
          b[i][j]=c[2*i+j];   
         }
    }
    for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
                {
                    cout << b[i][j] << " ";
                }
        cout << "\n";   
        cout << "\n";
        }
}