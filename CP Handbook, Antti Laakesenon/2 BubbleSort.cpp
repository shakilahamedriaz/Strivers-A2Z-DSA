#include<bits/stdc++.h>
using namespace std;

int main()
{
   
    int n;
    cout<< "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout<< "Enter the array elements : ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    //bubble sorting algorithm
    for(int i  = 0; i < n; i++)
    {
        for(int j = 0; j < n-1; j++) 
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(auto it: arr)
    {
        cout<< it << " ";
    }

    return 0;
}