#include<bits/stdc++.h>
using namespace std;


int main()
{

    int arr[5];
    cin>>arr[0];
    cin>>arr[1];
    cin>>arr[2];

    cout<< "output the index no 1:"<<arr[0]<<endl;

    int arr2[10];
    //for taking input
    for(int i=0; i<10; i++){

        cin>>arr2[i];

    }

    //for printing output
    cout<< "arr2 output: "<<endl;
    for(int i=0; i<10; i++){

        cout<<arr2[i]<< " ";
    }
    cout<< endl;


    return 0;
}
