/*
Given array a of N integers.Given Q quries
and in each query given L and R print sum of
array elements from index L to R (L, R included)


Constraints
1<=N <=10^5
1<=a[i]<=10^9
1<=Q <=10^5
1<=L, R<=N

*/
#include<bits/stdc++.h>
using namespace std;
const int N= 1e5+10;
int a[N];
int main()
{
    int n;
    cin >>n;
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    int q;
    cin >>q;
    while(q--)
    {
        int l,r;
        cin >>l >>r;
        long long sum=0;
        for(int i=l; i<=r; i++)
        {
            sum+=a[i];
        }

        cout<<sum<<endl;

    }
   return 0;
}


//time complexity:
//O(n)+)+(Q*n) = 10^10.

//this is much tc that dont execute in 1 sec. 
//we can reduce it by prfix sum.
