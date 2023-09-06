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
int prefixsum[N];
int main()
{
    int n;
    cin >>n;
    for(int i=1; i<=n; i++)
    {
        cin >> a[i]; // 1 2 3 4 5
        prefixsum[i]= prefixsum[i-1]+a[i];
    }
    int q;
    cin >>q;
    while(q--)
    {
        int l,r;
        cin >>l >>r;

        cout<<prefixsum[r]-prefixsum[l-1]<<endl;

    }
   return 0;
}
//0(n)+0(Q)=  10^5