#include<bits/stdc++.h>
using namespace std;

void countDigit(int n)
{
    int revNum=0;
    while(n>0)
    {
        int lastDigit= n%10;
        revNum = (revNum*10)+lastDigit;
        n=n/10;
    }
    cout<<revNum<<endl;
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