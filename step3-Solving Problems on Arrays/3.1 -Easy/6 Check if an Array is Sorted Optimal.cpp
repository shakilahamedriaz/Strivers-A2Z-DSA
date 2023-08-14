#include<bits/stdc++.h>
using namespace std;

bool is_sorted(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        if(arr[i] < arr[i-1])
        {
            return false;
            break;
        }
    }
    return true;
}

int main()
{

    int arr[]= {1,2,3,4,5,6,7,8,8,9,10};
    int n= sizeof(arr)/sizeof(arr[0]);

    bool ans = is_sorted(arr, arr+n);

    if(ans) cout<< "Sorted array";
    else cout<< "Not sorted array"; 

    return 0;
}