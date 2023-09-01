


#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int n) {
     
     //sum of first N numbers:
     int sum=(n*(n+1))/2;
     //summatoin of given array elements:
     int sum2=0;
     for(int i=0; i<n-1; i++)
     {
        sum2+=a[i];
     }

     int missing_Numb=sum-sum2;

     return missing_Numb;
}

int main()
{
    int n = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, n);
    cout << "The missing number is: " << ans << endl;
    return 0;
}
