/*
  Longest Consecutive Sequence in an Array
Problem Statement: You are given an array of ‘N’ integers. You need to find the length of the longest sequence which contains the consecutive elements.

Examples
Example 1:

Input: [100, 200, 1, 3, 2, 4]

Output: 4

Explanation: The longest consecutive subsequence is 1, 2, 3, and 4.

Input: [3, 8, 5, 7, 6]

Output: 4

Explanation: The longest consecutive subsequence is 5, 6, 7, and 8.
*/

#include<bits/stdc++.h>
using namespace std;


bool linerSearch(vector<int> &a, int num)
{
    int n=a.size();

    for(int i=0; i<n; i++)
    {
        if(a[i]== num)
        return true;
    }

    return false;
}

int LongestConsecutiveElements(vector<int>&a)
{
    int n = a.size();
    int longest = 1;

    //pick a element and search for its consecutive numbers: 

    for(int i = 0; i < n; i++)
    {
        int x = a[i];
        int cnt = 1;

        //search for consecutive numbers using liner search:

        while(linerSearch(a, x+1) == true)
        {
            x+=1;
            cnt++;
        }

        longest = max(longest, cnt);

    }
    return longest;
}

int main()
{
    vector<int> a= {100, 200, 1, 2, 3, 4};

    int ans= LongestConsecutiveElements(a);

    cout<< "The Longest Con. Seq. length is : "<<ans<<endl;

    return 0;
}