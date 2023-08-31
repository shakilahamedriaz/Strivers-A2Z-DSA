//by liner search
#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int n)
{
    //outer loop that runs from 1 to N
    for(int i=1; i<=n; i++)
    {
        //flag variable to check if an element exist
        int flag = 0;
        //search the elements using linear search
        for(int j=0; j<n-1; j++)
        {
            if(a[j]==i)
            {
                //i is present in the array:
                flag = 1;
                break;
            }
        }

        //if missing flag =0;
        if(flag==0)
        {
            return i;
        }
    
    }
       // The following line will never execute.
       // It is just to avoid warnings.
      return -1;
}

int main()
{
    int n=5;
    vector<int>a={1,2,4,5};
    int ans=missingNumber(a,n);

    cout<< "Missing number is : "<< ans <<endl;

    return 0;
}