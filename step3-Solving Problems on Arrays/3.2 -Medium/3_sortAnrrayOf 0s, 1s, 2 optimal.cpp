/*
Problem Statement: Given an array consisting of only 0s, 1s, and 2s.
 Write a program to in-place sort the array without using inbuilt sort functions. 
 ( Expected: Single pass-O(N) and constant space)
*/
#include<bits/stdc++.h>
using namespace std;

void sortArray(int n, vector<int> & arr)
{
    //dutch national flag algorithm.
    //skhte hbe
    //https://youtu.be/tp8JIuCXBaU?t=1077
    int low=0, mid=0, high=n-1;
    while(mid<=high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1)
        {
           mid++;
        }
        else//for 2
        { 
          swap(arr[mid], arr[high]);
          high--;
        }
    }

}
int main()
{
    int n =6;
    vector<int>arr= {0,2,1,2,0,1};

    sortArray(n, arr);
    cout<< "after sorting : "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<< arr[i]<< " ";
    }
    cout<<endl;

    return 0;
}