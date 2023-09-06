/*
Given T test cases and in each 
test case a number N. Print its factorial
for each test case % M

Where M=10^9+7*
Constrains:
1<=T <=10^5
1<=N <=10^5
*/
#include<bits/stdc++.h>
using namespace std;
const int M=10e9+7;
int main()
{
    int  t;
    cin >>t;
    While(t--)
    {
        int n;
        cin >>n;
        long long fact = 1;
        for(int i=2; i<=n; i++)
        {
            fact=(fact*i) % M;
        }
        
        cout<<fact<<endl;
    }
}
//0(T*N) = 10^10   cz 10^5*10^5
//this wil appears tle. cz code dosent work in 1 sec.

//thats why we use Precompute in next file/code