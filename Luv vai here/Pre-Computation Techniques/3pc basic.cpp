/*
Given a of N integers.Given Q queries
and in each query given a number X,
print count of that number in array.

Constraints:
1<=N<=10^5
1<=a[i]<=10^7
1<=Q <=10^5

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin >>a[i];
    }
    int q;
    cin >>q;

    while(q--)
    {
        int x;
        cin >>x;
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==x)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;

    }
    return 0;
}

//0(N)+0(Q*N) = 0(N^2)=10^10.
//this will not run within 1 second, cz 10^7 will works for 1 sec.
