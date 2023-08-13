#include<bits/stdc++.h>
using namespace std;

void Largest(int arr[], int n)
{
    int max=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i] > max)
        {
            max= arr[i];
        }
    }
    cout<< "The largest element in the array is: "<<max;
}
int main()
{
    int arr[]= {3,2,5,1,4};
    int n= sizeof(arr)/sizeof(arr[0]);

    Largest(arr, n);

    return 0;
}