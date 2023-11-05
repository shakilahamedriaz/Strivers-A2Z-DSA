#include<bits/stdc++.h>
using namespace std;

int maxSubarrySUm(int arr[], int n)
{
    int maxSum=INT_MIN;

    for(int i=0; i<n; i++)
    {    
        int sum=0;
        for(int j=i; j<n; j++)
        {
          sum+=arr[j];
          maxSum=max(maxSum, sum);

        }
    }

    return maxSum;
}

int main()
{
    int arr[]= { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n=sizeof(arr)/sizeof(arr[0]);

    int maxSum= maxSubarrySUm(arr, n);
    cout<< "Maximum subArray sum is : "<< maxSum <<endl;

    return 0;
}