#include<bits/stdc++.h>
using namespace std;
int number = 1;
void printN()
{
    if(number == 11 ) return;
    cout<<number<<endl;
    number++;

    printN();
}

int main()
{
    printN();
    return 0;
}