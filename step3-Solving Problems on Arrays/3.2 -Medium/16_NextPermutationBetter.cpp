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
    int arr[] = {3,2,1};
    int len= end(arr) - begin(arr);
    //sizeof(arr)/sizeof(arr[0]);
    //arr.size(); for vector.

    //***using in-built function of C++***//
    next_permutation(arr, arr + len);
    //next_permutation(sortFunctionOfArray)
    cout<<arr[0]<< " "<<arr[1]<< " " <<arr[2];

    return 0;
}

/*
The 3! possible permutations with 3 elements:
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
After loop: 1 2 3
*/