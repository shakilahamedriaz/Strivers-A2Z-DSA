#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, int> mpp;
    
    for(int i=0; i<s.size(); i++)
    {
        mpp[s[i]]++;
    }

    int q;
    cout<< "time to check : ";
    cin >> q;
    while(q--)
    {
        char ch;
        cout<< "Enter char to find freq : ";
        cin >> ch;

        //fecth
        cout<<"Frequency of "<<ch<< ": ";
        cout<<mpp[ch]<<endl;

    }

    return 0;

}

//Time complexity of map : 

// Log(n) for wrost,best, Average