#include<bits/stdc++.h>
using namespace std;

void pattern19(int n)
{
        //top half
     int iniS = 0;
     for(int i=0; i<n; i++)
     {
          //stars
          for(int j=1; j<=n-i; j++)
            {
                 cout<<"*";
            }
          //spaces
          for(int j=0; j<iniS; j++)
            {
                 cout<<" ";
            }
          //stars
            for(int j=1; j<=n-i; j++)
                {
                     cout<<"*";
                }
                iniS+=2;
                cout << endl;
     }

     //bottom half
     //this formula can run code multiple tese cases
     iniS=2*(n-1);
      for(int i=1; i<=n; i++)
      { 
          //stars
          for(int j=1; j<=i; j++)
            {
                 cout<<"*";
            }
          //spaces
          for(int j=0; j<iniS; j++)
            {
                 cout<<" ";
            }
          //stars
            for(int j=1; j<=i; j++)
                {
                     cout<<"*";
                }
                iniS -=2;
                cout << endl;

      }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);

    int n;
    cin>>n;
    pattern19(n);

    return 0;
}