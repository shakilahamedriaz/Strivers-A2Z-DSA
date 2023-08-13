#include<bits/stdc++.h>
using namespace std;



void getElements(int arr[], int n)
{
    if(n==0 || n==1)
    {
        cout<<"No Second Largest Element";
        return;
    }
    sort(arr, arr+n);
    int small=arr[1];
    int large=arr[n-2];

    cout<<"Second Largest Element is: "<<large<<endl;
    cout<<"Second Smallest Element is: "<<small<<endl;
}

int main()
{
    int arr[]= {1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);

    getElements(arr,n);

    return 0;
}