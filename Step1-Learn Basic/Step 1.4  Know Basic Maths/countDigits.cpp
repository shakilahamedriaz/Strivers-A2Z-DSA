#include<bits/stdc++.h>
using namespace std;

void countDigit(int n)
{
    int count=0;
    while(n>0)
    {
        int lastDigit= n%10;
        count++;
        n=n/10;
    }
    cout<<count<<endl;
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