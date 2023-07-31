//here we can know array declaration size for hashing or any ohter
//......................................................
//                         for int          for bool   |
//------------------------------------------------------
// inside main function :  arr[10^6]        arr[10^7]
// br Global               arr[10^7]        arr[10^8]



//** BUt for 10^9, 10^12, 10^13 or etc we canot use hashing/hashArray
// Thats why we use Maps.

// Lets know abut map:

/*
  map has two things:
                      key, value
                      key= number;
                      value=frequency;

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    //pre-compute
    map<int, int> mpp;
    for(int i=0;i<n; i++)
    {
        mpp[arr[i]]++;
    }


    int q;
    cin >> q;
    while(q--)
    {
        int number;
        cin >> number;

        //fecth
        cout<<"Frequency of "<<number<< " ";3
        cout<<mpp[number]<<endl;

    }

    return 0;

}

//keep in mind:

//map always store value in sorted order.**