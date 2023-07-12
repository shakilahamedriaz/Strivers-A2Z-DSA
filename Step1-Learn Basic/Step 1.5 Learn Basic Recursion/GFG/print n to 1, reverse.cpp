#include<bits/stdc++.h>
using namespace std;

void printNto1(int i, int n)
{
      if(i<1) return;

      cout<<i<<endl;

      printNto1(i-1, n);
}

int main()
{

    int n;
    cin>>n;
    printNto1(n,n);
    return 0;
}