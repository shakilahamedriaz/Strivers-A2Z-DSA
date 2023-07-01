#include<bits/stdc++.h>
using namespace std;

void findGCD(int n1, int n2)
{
     int gcd=1;
       // for(int i=1; i<=min(n1,n2);i++)
        for(int i=min(n1,n2); i>=i; i--)
        {
            if(n1%i==0 && n2%i==0)
            {
                gcd=i;
            }
        }

        cout<<gcd<<endl;
}

int main()
{

    int n1, n2;
    cin >> n1 >> n2;

    findGCD(n1, n2);

    return 0;
}