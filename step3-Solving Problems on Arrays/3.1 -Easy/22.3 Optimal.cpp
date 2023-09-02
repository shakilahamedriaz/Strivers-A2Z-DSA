#include<bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr)
{
    int xorr=0;
    for(int i=0; i<arr.size(); i++)
    {
         xorr= xorr ^ arr[i];
    }

    return xorr;
}

int main()
{
    vector<int>arr= {4,1,2,1,2,4,5,6,6,5,8,};
    int ans =getSingleElement(arr);

    cout<< "Single element Is : "<<ans <<endl;

    return 0;
}