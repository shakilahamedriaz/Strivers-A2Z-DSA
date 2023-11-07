#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &arr)
{
    int maxPro=0;
    int n=arr.size();
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
           if(arr[j] > arr[i])
           {
              maxPro= max(maxPro, arr[j] - arr[i]);
              
           }
        }
    }
    return maxPro;
}

int main()
{
    vector<int> arr= {7,1,5,3,6,4};
    int max= maxProfit(arr);

    cout<< "max profit is : "<< max <<endl;

    return 0;
}