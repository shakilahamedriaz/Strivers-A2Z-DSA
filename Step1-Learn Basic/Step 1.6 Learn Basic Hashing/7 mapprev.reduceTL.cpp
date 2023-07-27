#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mpp;
    
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    //keep in mind:
    //map always store value in sorted order.**
    // by iterate in the map, we can see
    for (auto it : mpp)
    {
        cout << it.first << "-->" << it.second << endl;
    }

    int q;
    cin >> q;
    while(q--)
    {
        int number;
        cin >> number;

        //fecth
        cout<<"Frequency of : "<<number<< " ";
        cout<<mpp[number]<<endl;

    }

    return 0;

}