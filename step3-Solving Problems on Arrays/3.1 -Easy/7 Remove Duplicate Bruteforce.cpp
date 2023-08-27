#include <bits/stdc++.h>
using namespace std;

int removeDuplicate(int arr[], int n)
{
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }

    int j = 0;
    for (int x : st)
    {
        arr[j++] = x;
    }

    return j; // Return the size of the modified array
}

int main()
{
    int n;
    cin >> n;

    int arr[n]; // Declare an array of size 'n'
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k = removeDuplicate(arr, n);

    cout << "Total unique array  : " << k << endl;
    cout << "Array after removing duplicate elements: ";
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
