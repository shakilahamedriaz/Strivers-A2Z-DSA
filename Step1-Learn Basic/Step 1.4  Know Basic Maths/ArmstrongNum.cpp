#include<bits/stdc++.h>
using namespace std;

void armstrong(int n)
{
     int sum= 0;
     int duplicateOf_n=n;
     while(n>0)
     {
        int lastDigit= n %10;
        sum=sum+(lastDigit*lastDigit*lastDigit);

        n= n/10;
     }
     if(duplicateOf_n==sum)
      cout<< "Yes"<<endl;

     else 
        cout<< "No"<<endl;
}

int main()
{
        int n;
        cin>>n;

        armstrong(n);

    return 0;
}