/*
  Problem Statement:

There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements.
 Without altering the relative order of positive and negative elements, you must return
  an array of alternately positive and negative values.

Note: Start the array with positive elements.

Examples: 

Example 1:

Input:
arr[] = {1,2,-4,-5}, N = 4
Output:
1 -4 2 -5

Explanation: 

Positive elements = 1,2
Negative elements = -4,-5
To maintain relative ordering, 1 must occur before 2, and -4 must occur before -5.
*/

//if n==even and n/2 pos and n/2 neg velues;

#include<bits/stdc++.h>
using namespace std;

vector<int> reArrangeBySign(vector<int> A, int n)

{
    //define an array for storing the ans saperately
    vector<int> ans(n,0);
    //positve elements starts from index 0
    int posIndex = 0;
    //negative elements starts from index 1
    int negIndex = 1;
    
    for(int i=0; i<n; i++)
    {
        //fill negative elements in odd indices and inc by 2
        if(A[i] < 0)
        {
            ans[negIndex] = A[i];
            negIndex+=2;
        }
        //fill positive elem in even and ,inc by 2
        else
        {
            ans[posIndex] = A[i];
            posIndex+=2;
        }
    }

    return ans;
}

int main()
{
    int n=4;
    vector<int> A {1,2,-4,-5};

   
    vector<int> ans= reArrangeBySign(A,n);

    for(int i=0; i<n; i++)
    {
        cout<< ans[i]<< " ";
    }

    return 0;
}