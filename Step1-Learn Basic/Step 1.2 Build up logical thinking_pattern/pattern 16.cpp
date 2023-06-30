#include<bits/stdc++.h>
using namespace std;


void Pattern16(int n)
  {
      for(int i=0; i<n; i++)
      {   
        char ch='A'+i;
          for(int j=0; j<=i; j++)
          {
                cout<<ch<< " ";
          }
            cout<<endl;
      }
  }

int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int n;
   cin >> n;
   Pattern16(n);

    return 0;
}