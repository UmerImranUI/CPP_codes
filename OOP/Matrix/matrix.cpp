#include <iostream>
using namespace std;

int main()
{
    int myarray[5][5];
    int myarray1[2][2] = {1, 2, 3, 4};
    int myarray2[3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};

    // for (int i=0; i<3; i++){

    //     for (int j=0; j<3; j++){
    //         cout<<myarray2[i][j]<<"  ";

    //     }
    //     cout<<endl;
    // }

    // for 2x2 matrix

    // cout<<"enter the values for 2x2 matrix"<<endl;
    // for (int i=0; i<2; i++){

    //     for (int j=0; j<2; j++){
    //         cin>>myarray1[i][j];

    //     }
    //     cout<<endl;
    // }

    // cout<<"the values for 2x2 matrix"<<endl;
    // for (int i=0; i<2; i++){

    //     for (int j=0; j<2; j++){
    //         cout<<myarray1[i][j]<<"   ";

    //     }
    //     cout<<endl;
    // }
    int A[2][2], B[2][2], addition[2][2], subtraction[2][2], multiplication[2][2];

    cout << "Enter values for 2-D array A" << endl;
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "Enter values for 2-D array B" << endl;
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            addition[i][j]=A[i][j]+B[i][j];
        }
        cout<<endl;
    }

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            subtraction[i][j]=A[i][j]-B[i][j];
        }
        cout<<endl;
    }

        for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            multiplication[i][j]=A[i][j]*B[i][j];
        }
        cout<<endl;
    }
    cout<<"Addition of matrix is"<<endl;
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            cout << addition[i][j]<<"   ";
        }
        cout<<endl;
    }
    cout<<"Subtraction of matrix is"<<endl;
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            cout << subtraction[i][j]<<"   ";
        }
        cout<<endl;
    }

    cout<<"Multiplication of matrix is"<<endl;
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            cout << multiplication[i][j]<<"   ";
        }
        cout<<endl;
    }
}




