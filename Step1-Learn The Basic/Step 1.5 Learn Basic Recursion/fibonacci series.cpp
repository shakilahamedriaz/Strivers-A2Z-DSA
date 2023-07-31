#include<bits/stdc++.h>
using namespace std;

vector<int> fibonacci(int n)
{
    vector<int> fib;
    if(n <= 0)
        return fib;

    fib.push_back(0);

    if(n == 1)
        return fib;

    fib.push_back(1);

    for(int i = 2; i <= n; i++)
    {
        int num = fib[i-1] + fib[i-2];
        fib.push_back(num);
    }

    return fib;
}

int main()
{
    int n;
    cin >> n;
    vector<int> fibSeries = fibonacci(n);

    for(int i = 0; i <= n; i++)
    {
        cout << fibSeries[i] << " ";
    }
    cout << endl;

    return 0;
}
