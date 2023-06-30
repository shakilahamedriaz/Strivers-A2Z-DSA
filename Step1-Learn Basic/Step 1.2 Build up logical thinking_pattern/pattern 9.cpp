#include<bits/stdc++.h>
using namespace std;

void print7(int n)
{
      //row
      for(int i=0; i<n; i++)
      {
         //space
         for(int j=0; j<n-i-1; j++)
         {
            cout<< " ";
         }
         //stars
         for(int j=0; j<2*i+1; j++)
         {
            cout<< "*";
         }
         //spaces

         for(int j=0; j<n-i-1; j++)
         {
            cout<< " ";
         }
       
       cout<<endl;
         
      }

}
void print8(int n)
{
      //row
      for(int i=0; i<n; i++)
      {
         //space
         for(int j=0; j<i; j++)
         {
            cout<< " ";
         }
         //stars
         for(int j=0; j<2*n-(2*i + 1); j++)
         {
            cout<< "*";
         }
         //spaces

         for(int j=0; j<i; j++)
         {
            cout<< " ";
         }
       
       cout<<endl;
         
      }
}


int main()
{
    int n;
    cin>>n;
    print7(n);
    print8(n);

}
