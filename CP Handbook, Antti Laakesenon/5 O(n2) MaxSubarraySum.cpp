#include<bits/stdc++.h>
using namespace std;

int main()
{
   
    int n;
    cout<< "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int best = 0;
    for(int i = 0; i < n; i++)
    {
         int sum = 0;
         for(int j  = i; j < n; j++)
         {
            sum += arr[j];
            best = max(best, sum);
         }
    }
    cout<< best << "\n";

    return 0;
}