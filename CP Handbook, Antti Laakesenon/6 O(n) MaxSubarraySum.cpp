#include<bits/stdc++.h>
using namespace std;

int main()
{
   
    int n;
    cout<< "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int best = 0, sum = 0;

    for(int k = 0; k < n; k ++)
    {
        sum = max( arr[k] , sum + arr[k]);
        best = max(best, sum);
    }



   
    cout<< best << "\n";

    return 0;
}