#include<bits/stdc++.h>
using namespace std;

void printNto1_backtracking(int i, int n)
{
    if(i<1)
       return ;

       printNto1_backtracking(i+1,n);
       cout<<i<<endl;
}

int main()
{
    int n;
    cin >> n;
    printNto1_backtracking(n,n);
    return 0;
}