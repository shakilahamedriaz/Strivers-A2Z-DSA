#include<bits/stdc++.h>
using namespace std;

int removeDuplicate(int arr[], int n)
{
    set<int> st;
    for(int i=0; i<n; i++)
    {
        st.insert(arr[i]);
    }

    int k= st.size();
    int j=0;

    for(int x: st)
    {
        arr[j++]=x;
    }

    return k;
}


int main()
{
     int arr[]= {1,1,1,2,2,2,3,3,3,4,4,4,5,5,5};
     int n= sizeof(arr)/sizeof(arr[0]);

     int k= removeDuplicate(arr, n);
     
     cout<< "Total unique array  : "<< k<<endl; // "Total unique array  : 5
     cout<< "Array after removing duplicate elements: ";
     for(int i=0; i<k; i++)
     {
        cout<< arr[i]<< " ";
     }

   return 0;
}