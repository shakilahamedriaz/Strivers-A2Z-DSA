#include<bits/stdc++.h>
using namespace std;
int cnt=1;

void printNtimes(int N)
{
    if(cnt == N+1 ) return;

    cout<< "GFG"<< " ";
    cnt++;
    printNtimes(N);
}
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
      int N;
      cin>>N;
      printNtimes(N);
    }
    
    return 0;
}