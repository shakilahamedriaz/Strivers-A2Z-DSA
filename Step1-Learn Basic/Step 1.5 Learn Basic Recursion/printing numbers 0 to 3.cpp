#include<bits/stdc++.h>
using namespace std;
int cnt = 0;

void print()
{
    
    // Base conditon:
    if(cnt == 10) return;
    cout<<cnt<<endl;

    //count Increment
    cnt++;
    print();
}

int main()
{
    print();
    return 0;
}