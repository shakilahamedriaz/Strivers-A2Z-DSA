/*
Given T test cases and in each 
test case a number N. Print its factorial
for each test case % M

Where M=!0^9+7*

Constrains:
1<=T <=10^5
1<=N <=10^5
*/
//pre-compute
//first compute/store
//then use

#include<bits/stdc++.h>
using namespace std;
const int M= 10e9+7;
const int N=10e5+10;
long long fact[N];

int main()
{
    
    fact[0]=fact[1]=1;
    for(int i=2; i<N; i++)
    {
        fact[i]=fact[i-1]*i;
    }
    int  t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >>n;
       
        cout<<fact[n]<<endl;
    }
    return 0;
}

//  O(N)+)(T)= O(N); 10^5+0^5;
//this method calls prcompute