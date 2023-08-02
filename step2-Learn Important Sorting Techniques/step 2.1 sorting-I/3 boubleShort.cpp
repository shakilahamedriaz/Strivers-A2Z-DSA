#include<bits/stdc++.h>
using namespace std;

void Bubble_sort(int arr[], int n)
{
         //swap i with i+1; if i<i+1;
        for(int i=n-1; i>=0; i--)
        {
            int didSwap=0;
            for(int j=0; j<=i-1; j++)
            {
                if(arr[j]> arr[j+1])
                {
                    int temp= arr[j+1];
                    arr[j+1]= arr[j];
                    arr[j]=temp;
                    didSwap=1;
                }
            }
            if(didSwap == 0)
            {
                break;
            }
        }
        
        for(int i=0; i<n; i++)
        {
            cout<<arr[i] << " ";
        }
}

int main()
{

    int n;
    cin >>n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    Bubble_sort(arr,n);
    return 0;

}

// best case 0(n); if arleady sorted.
//avg+wrost  0(n^2);


