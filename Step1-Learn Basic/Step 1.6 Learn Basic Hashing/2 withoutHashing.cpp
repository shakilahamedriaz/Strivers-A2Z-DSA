#include <iostream>
using namespace std;

int ans(char c, string s, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == c)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the string size: ";
    cin >> n;
    
    string s;
    cout << "Enter the String ";
    cin >> s;

    int time;
    cout << "total taken test : ";
    cin >> time;

    char c; // Move the declaration of 'c' outside the while loop
    while (time--)
    {
        cout << "Enter the char to count occurrences: ";
        cin >> c;
        int total = ans(c, s, n);
        cout << "Total number of Frequency :" << c << " is: ";
        cout << total << endl;
    }

    return 0;
}



//for these problems, time complexity is= [ 0(n)*sizeofarray ]

//time take for : 10^6 = 1 sec
//10^10 operation take= 100 sec

//for 10^10 operation, we need to reduce time complexity
//so we use hashing


//hashing is a technique to reduce time complexity
//hashing is a technique to store and fetch data in constant time

