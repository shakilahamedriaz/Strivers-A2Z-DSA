//parameterised way

#include<bits/stdc++.h>
using namespace std;

void printNsum(int i, int sum)
{
      if(i<1)
      {
         cout<<sum<<endl;
         return ;
      }

      printNsum(i-1, sum+i);
}

int main()
{
    int n;
    cin >>n;
    printNsum(n, 0);

    return 0;
}