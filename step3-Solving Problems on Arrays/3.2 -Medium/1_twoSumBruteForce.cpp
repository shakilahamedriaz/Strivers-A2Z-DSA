/*
Two Sum : Check if a pair with given sum exists in Array
Problem Statement: Given an array of integers arr[] and an integer target.
*/
//1st variant: Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.

#include<bits/stdc++.h>
using namespace std;

string twoSum(vector<int> &arr, int n, int target)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]+arr[j]==target)
            {
                return "YES";
            }
        }
    }
    return "NO";
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
    string ans=twoSum(arr, n, target);
    cout<< "This is the answer of variant 1 : "<<ans<<endl;

    return 0;
}