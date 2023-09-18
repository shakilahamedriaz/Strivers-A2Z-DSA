#include<bits/stdc++.h>
using namespace std;
int getSingleElements(vector<int> & arr)
{
    //size of the arr:
    int n= arr.size();
    //run a loop for selecting  elements:
    for(int i=0; i<n; i++)
    {
        int num = arr[i];
        int cnt=0;

        //find the occurrence using linear search :
        for(int j=0; j<n; j++)
        {
            if(arr[j]==num)
            cnt++;
        }
        if(cnt==1) return num;
    }
    return -1;
}

int main()
{
    vector<int> arr={4, 1, 2, 1, 2};
    int ans= getSingleElements(arr);

    cout<< "The single Element is : "<<ans <<endl;

    return 0;
}