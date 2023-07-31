#include <iostream>
using namespace std;

int ans(int number, int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == number)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int number;
    cout << "Enter the number to count occurrences: ";
    cin >> number;

    int total = ans(number, arr, n);
    cout << "Total number of occurrences of " << number << " is: ";
    cout << total;

    return 0;
}


//for these problems, time complexity is= [ 0(n)*sizeofarray ]

//time take for : 10^6 = 1 sec
//10^10 operation take= 100 sec

//for 10^10 operation, we need to reduce time complexity
//so we use hashing


//hashing is a technique to reduce time complexity
//hashing is a technique to store and fetch data in constant time

