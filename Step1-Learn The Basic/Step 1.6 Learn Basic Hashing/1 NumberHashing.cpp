//Hasing = prestoring/fetching

/* Hashing in the data structure is a technique 
of mapping a large chunk of data into small tables 
using a hashing function*/

//solve problem is less time complexity: 
//1. find the number of occurrences of a number in an array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<< "Enter the size of the array : ";
    cin >> n;
    int arr[n];

    cout<< "Enter the elements : ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    //precompute
    int hash[13]={0};   //hash array to store all zeros, here 13 is the max num to find how much freq
    for(int i=0; i<n; i++)
    {
        hash[arr[i]]+=1;
    }
    

    int q;
    cout<< "Find total number of frq time:  ";
    cin >> q;
    while(q--)
    {   
        int number;
        cout<< "Enter the frequecny to know : ";
        cin >> number;

        //fetch
        cout<< "Ans : ";
        cout<<hash[number] <<endl;
    }
    return 0;
}
//we learnt : number hashing,,



//here we can know array declaration size for hashing or any ohter
//......................................................
//                         for int          for bool   |
//------------------------------------------------------
// inside main function :  arr[10^6]        arr[10^7]
// br Global               arr[10^7]        arr[10^8]