#include<bits/stdc++.h>
using namespace std;

int main(){

  int arr[2][2];
  cout<< "enter the array elements: "<<endl;
  for(int i=0; i<2; i++){

      for(int j=0; j<2; j++)
      {
          cout<<"arr["<<i<<"]["<<j<< "] : ";
          cin>>arr[i][j];
      }
  }

  cout<< "OUtput the 2d array : "<<endl;;

     for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){

            cout<< arr[i][j]<< " ";
        }
        cout<<endl;
     }


return 0;
}
