//given an arry of n numbers, our task is to calculate the maximum subarry sum;

#include<bits/stdc++.h>
using namespace std;

maximumsubArrSum(vector<int>&arr, int n)
{
    int best=0,sum=0;
    for(int i=0; i<n; i++)
    {
        sum=max(arr[i], sum+arr[i]);
        best=max(best,sum);

    }
    return best;
}

int main()
{
    vector<int>arr={ -1};//-1,2,4,-3,5,2,-5,2};
    int n=arr.size();

    int ans=maximumsubArrSum(arr,n);
    cout<< "Maximum sub array sum is : "<<ans<<endl;
    return 0;
}