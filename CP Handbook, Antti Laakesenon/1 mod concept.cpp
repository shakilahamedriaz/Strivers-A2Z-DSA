#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<< "Enter the number N : ";
    long long n , x = 1;
    cin >> n;

    for(int i = 2; i <=n ; i++)
    {
        x = (x*i) % 11;
        cout<< x << endl;
    }

    cout<< x % 11 <<endl;


    return 0;
}