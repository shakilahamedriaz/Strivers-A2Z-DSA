#include<bits/stdc++.h>
using namespace std;

int maxSubarrySUm(int arr[], int n)
{
    int best= INT_MIN;
    int sum=0;

    for(int i=0; i<n; i++)
    {
        sum=max(arr[i], sum + arr[i]);
        best =max(best, sum);
    }
    return best;
}

int main()
{
    int arr[]= { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n=sizeof(arr)/sizeof(arr[0]);

    int maxSum= maxSubarrySUm(arr, n);
    cout<< "Maximum subArray sum is : "<< maxSum <<endl;

    return 0;
}