#include<bits/stdc++.h>
using namespace std;

void print1toN_backtracking(int i, int n)
{
    if(i<1)
       return ;

       print1toN_backtracking(i-1,n);
       cout<<i<<endl;
}

int main()
{
    int n;
    cin >> n;
    print1toN_backtracking(n,n);
    return 0;
}