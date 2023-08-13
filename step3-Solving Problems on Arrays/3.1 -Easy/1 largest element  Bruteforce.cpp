#include<bits/stdc++.h>
using namespace std;

int sortArr(vector<int>& arr)
{
    sort(arr.begin(), arr.end());

    return arr[arr.size() -1];
}


int main()
{
    vector<int> arr1= {3,2,5,1,4};
    vector<int> arr2= {6,4,2,9,5};

    cout<< "The largest elements int the array is: "<<sortArr(arr1)<<endl;
    cout<< "The largest elements int the array is: "<<sortArr(arr2);

    return 0;
}