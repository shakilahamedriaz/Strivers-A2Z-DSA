/*
Two Sum : Check if a pair with given sum exists in Array
Problem Statement: Given an array of integers arr[] and an integer target.
*/
//2nd variant: Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &arr, int n, int target)
{
    vector<int>ans;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]+arr[j]==target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return { -1, -1};
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    vector<int>ans=twoSum(arr, n, target);
    cout<< "This is the answer of variant 2 : ["<<ans[0]<< ", "<<ans[1]<< "]"<<endl;

    return 0;
}


//TC= 0(n^2)
//SC= 0(1)