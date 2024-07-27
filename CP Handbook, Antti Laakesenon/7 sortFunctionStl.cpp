#include<bits/stdc++.h>
using namespace std;

int main()
{
    

    int n;
    cout<< "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout<< "Enter array elements : ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr + n);  //sort function to sort the array;
    cout<< "After using sort function array : ";
    for(auto it: arr) cout<< it << " ";
    cout<< '\n';


    int k;
    cout<< "Enter the size of the vector : ";
    cin >> k;
    vector< int > v;
    cout<< "Enter vectors elements : ";
    for(int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);

    }
    sort(v.begin(), v.end());
    cout<< "After using sort function vector(default / increasing) : ";
    for(auto it : v) cout<< it << " ";
    cout<< '\n';

    sort(v.rbegin(), v.rend());
    cout<< "After using reverse sort function vector : ";
    for(auto it: v) cout<< it << " ";
    cout<< '\n';


    return 0;
}