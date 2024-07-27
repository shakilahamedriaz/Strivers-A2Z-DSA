#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{

      
      int n;
      cout<< "Enter the size of the array : ";
      cin >> n;
      ll arr[n];
      for(int i = 0; i < n ; i ++) cin >> arr[i];



      ll best = 0;
      vector<int > v;

      for(int i = 0; i < n; i++) 
      {
          for(int j = i; j < n; j++)
          {
              ll sum  = 0;
              
              for(int k = i; k<= j; k++)
              {
                 sum += arr[k];
              }
              
              
              best = max ( best, sum);
            

          } 
   
      }


       cout<< "Maximum subarray sum is : ";
       cout<< best << '\n';

       cout<< "The arry is  :";
       for(auto it: v)
       {
          cout<< it << " ";
       }

    return 0;
}