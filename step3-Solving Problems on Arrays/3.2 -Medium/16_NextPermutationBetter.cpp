/*
 There's does not exist any better solution, But for C++ user

 C++ provides an in-built function called [next_permutation()]
 which directly returns the lexicographically next greater
  permutation of the input.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,3,2};
    int len= end(arr) - begin(arr);
    //sizeof(arr)/sizeof(arr[0]);
    //arr.size(); for vector.

    //***using in-built function of C++***//
    next_permutation(arr, arr + len);
    //next_permutation(sortFunctionOfArray)
    cout<<arr[0]<< " "<<arr[1]<< " " <<arr[2];

    return 0;
}