#include<bits/stdc++.h>
using namespace std;


void Pattern17(int n)
  {
      for(int i=0; i<n; i++)
       {  //spaces
          for(int j=0; j<n-i-1; j++)
          {
              cout<<" ";
          }

          //characters
          char ch='A';
          int breakpoint=(2*i+1)/2;
          for(int j=1; j<=2*i+1; j++)
          {
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
          }

          //spcaes
          for(int j=0; j<n-i-1; j++)
          {
              cout<<" ";
          }
          cout<<endl;
       }
        
  }

int main(){

   ios_base::sync_with_stdio(0);
   cin.tie(0);  cout.tie(0);
   
   int n;
   cin>>n;
   Pattern17(n);

    return 0;
}