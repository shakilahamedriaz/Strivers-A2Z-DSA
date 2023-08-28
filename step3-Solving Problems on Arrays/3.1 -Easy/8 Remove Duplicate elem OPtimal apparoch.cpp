// using two pointer approach.
#include<bits/stdc++.h>
using namespace std;

int removeDuplicate(int arr[], int n)
{
    int i=0;
    for(int j=0; j<n; j++)
    {
        if(arr[i]!=arr[j])
        {
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}

int main()
{
    int n;
    cin >>n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    int k=removeDuplicate(arr, n);
    cout<< "The array after removing duplicate elements in : "<<endl;
    for(int i=0; i<k; i++)
    {
        cout<< arr[i] << " ";
    }
    
}