#include<bits/stdc++.h>
using namespace std;


void Pattern18(int n)
  {
      for(int i=0; i<n; i++)
      {   
          for(char ch='E'-i; ch<='E'; ch++)
          {
                cout<<ch<< " ";
          }
            cout<<endl;
      }
  }

  void pattern18gfg(int n)
  {
     for (int i = 1; i <= n; i++) {
            for (int j = n - 1; j >= n - i; j--) {
                cout << (char)(65 + j) << " ";
            }
            cout << endl;
        }
    }
  

int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int n;
   cin >> n;
   //Pattern18(n);
   pattern18gfg(n);

    return 0;
}