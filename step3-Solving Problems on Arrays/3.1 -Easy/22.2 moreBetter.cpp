#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr) {

//size of the array
int n= arr.size();
//declare the hashmap
//and hash the given array;
map<int,int>mpp;
for(int i=0; i<n; i++)
{
    mpp[arr[i]]++;
}
//find the single elem
for(auto it : mpp)
{
    if(it.second == 1)
    return it.first;
}

  return -1;
}

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}