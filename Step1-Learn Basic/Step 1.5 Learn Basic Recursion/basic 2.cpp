// recursion : a type of function that repeatedly calls itself in an attempt to carry out specific logic.


//base condition : the conditon that you stop the functon is called base condition.

//print 0 to 10 using recursion.
#include<bits/stdc++.h>
using namespace std;
//global variable
int cnt=0;

void printNumber()
{
    if(cnt==11) return ;

    cout<< cnt <<endl;
    cnt++;
    //for call again printNumber() function.
    printNumber();
}

int main()
{

    printNumber();
    return 0;
}