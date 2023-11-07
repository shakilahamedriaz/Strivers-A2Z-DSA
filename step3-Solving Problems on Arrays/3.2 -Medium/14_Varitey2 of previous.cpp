/*
Variety-2
Problem Statement:
There’s an array ‘A’ of size ‘N’ with positive and negative elements (not necessarily equal). Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values. The leftover elements should be placed at the very end in the same order as in array A.

Note: Start the array with positive elements.

Examples: 

Example 1:

Input:
arr[] = {1,2,-4,-5,3,4}, N = 6
Output:
1 -4 2 -5 3 4

Explanation: 

Positive elements = 1,2
Negative elements = -4,-5
To maintain relative ordering, 1 must occur before 2, and -4 must occur before -5.
Leftover positive elements are 3 and 4 which are then placed at the end of the array.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> reArrangeBySign(vector<int>&A, int n)
{
     // Define 2 vectors, one for storing positive 
    // and other for negative elements of the array.
    vector<int>pos;
    vector<int>neg;

    // Segregate the array into positives and negatives.
    for(int i=0; i<n; i++)
    {
        if(A[i]>0) pos.push_back(A[i]);
        else neg.push_back(A[i]);
    }

    //if pos are leasser then negatives.
    if(pos.size() < neg.size())
    {
        for(int i=0; i<n; i++)
        {
            A[2*i] = pos[i];
            A[2*i+1] = neg[i];
        }
        
        //fill the remaining elements at the end of the arr

        int index = pos.size()*2;

        for(int i= pos.size(); i<neg.size(); i++)
        {
            A[index]= neg[i];
            index++;
        }
    }
    //If negatives are lesser then the positive
    else
    {
        for(int i=0; i<neg.size(); i++)
        {
            A[2*i] = pos[i];
            A[2*i+1] = neg[i];
        }

        //fill the reaming positive at the end of the array.

        int index = neg.size()*2;
        for(int i=neg.size();  i< pos.size(); i++)
        {
            A[index] = pos[i];
            index++;
        }

        return A;
    }

}

int main()
{
    int n=6;
    vector<int> A {1,2,-4,-5,3,4};

    vector<int> ans= reArrangeBySign(A, n);

    for(int i=0; i< ans.size(); i++)
    {
        cout<< ans[i] << " ";
    }
    return 0;
}