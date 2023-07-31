#include<bits/stdc++.h>
using namespace std;

bool isPrime(int number)
{
    for(int i=2; i<number; i++)
    {
        if(number % i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int testCase;
    cin >> testCase;
    while(testCase--)
    {
        int number;
        cin >> number;
        bool ans=isPrime(number);
        
        if(number !=0 && number != 1 && ans==true)
        {
            cout<< "Prime Number"<<endl;
        }
        else
        {
            cout<< "Non Prime Number"<<endl;
        }

        
    }

    return 0;
}
