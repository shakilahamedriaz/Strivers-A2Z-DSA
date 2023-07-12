#include<bits/stdc++.h>
using namespace std;

void rev(int i, int arr[], int n)
{
    if(i>=n/2)  return ;

    swap(arr[i], arr[n-i-1]);

    rev(i+1, arr, n);

}

int main()
{
    
    cout<< "Entet the array size : ";
    int n;
    cin >> n;
    int arr[n];
    cout<< "Enter the elements : ";
    for(int i=0; i<n; i++)
    {
        cin>> arr[i]<< " ";
    }
     
    rev(0, arr, n); 
    cout<< "Reverse order : ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }

    return 0;
}