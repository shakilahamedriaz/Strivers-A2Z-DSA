#include<bits/stdc++.h>
using namespace std;

void countDigit(int n)
{
   
    int cnt= (int)(log10(n)+1);
    cout<<cnt<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        countDigit(n);
    }

    return 0;
}