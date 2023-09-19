//Longest Subarray with given Sum K(Positives)
/*
Problem Statement: Given an array and a sum k,
 we need to print the length of the longest subarray that sums to k.

*/
#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a,int n, long long k) {
      
      int i=0, j=0, maxLen=INT_MIN;
      long long sum=0;
      while(j<n)
      {
        sum+=a[j];
        if(sum==k)
        {
            maxLen=max(maxLen,j-i+1);
            j++;
        }
        else if(sum<k)
        {
            j++;
        }
        else if(sum>k)
        {
            while(sum>k)
            {
                sum-=a[i];
                i++;
            }
            if(sum==k)
            {
                maxLen=max(maxLen,j-i+1);
            }
            j++;
        }
      }

      return maxLen;
}

int main()
{
    vector<int> a = {1,2,3,1,1,1,1,4,2,2};           //{2, 3, 5, 1, 9};
    int n=a.size();
    long long k = 3;
    int len = getLongestSubarray(a,n, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}

