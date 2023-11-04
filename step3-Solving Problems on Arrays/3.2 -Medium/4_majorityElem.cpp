/*
   Problem Statement: Given an array of N integers,
    write a program to return an element that occurs 
     more than N/2 times in the given array. You may
      consider that such an element always exists in
       the array.
*/

// #Bruteforce method
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> & arr)
{
    int n=arr.size();
    for(int i=0; i<n; i++)
    {
         int cnt=0;
         int index= arr[i];

         for(int j=0; j<n; j++)
         {
             if(index == arr[j]) cnt++;
         }

         if(cnt > (n/2))
         return index;

    }

    return -1;
}


int main()
{
    vector<int> arr= {2, 2, 1, 1, 1, 2, 2};
    int ans= majorityElement(arr);

    cout<< "The majority emement: "<< ans <<endl;

    return 0;
}