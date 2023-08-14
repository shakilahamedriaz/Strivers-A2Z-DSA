#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]< arr[i])
            {
                return false;
                break;
            }
        }

    }
    return true;
}

int main()
{
    int arr[]= {1,2,3,4,5,6,7,8,90,10};
    int n= sizeof(arr)/sizeof(arr[0]);

    bool ans=isSorted(arr,n);

    if(ans) cout<< "Array is Sorted"<<endl;
    else cout<< "Array is not Sorted"<<endl;
}