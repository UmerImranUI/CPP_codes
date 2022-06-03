#include <iostream>
using namespace std;
#define A 5
int main(){
   int arr[A][A] = { {1,2,3,4,5},{6,7,8,9,0},{5,4,3,2,1},{0,0,0,0,0},{8,9,7,6,1}};
   int i, j;
   cout<<"Row Major Traversal "<<endl;
   for(i=0;i<A;i++){
      cout<<endl;
      for(j=0;j<A;j++){
         cout<<" "<<arr[i][j];
      }
   }
   cout<<endl<<endl;
   cout<<"Column Major Traversal "<<endl;
   for(i=0;i<A;i++){
      cout<<endl;
      for(j=0;j<A;j++){
         cout<<" "<<arr[j][i];
      }
   }
   return 0;
}
