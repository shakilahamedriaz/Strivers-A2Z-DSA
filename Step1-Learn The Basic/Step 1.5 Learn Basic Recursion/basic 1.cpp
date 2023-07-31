// what is recursion ?

//when a function call itself until a specified condition met.

//lets see an unlimited function itself  *recursion

#include<bits/stdc++.h>
using namespace std;

void print(){

    cout<< 1 <<endl;

    print();

}
int main()
{
    
    print();

    return 0;
}

//output : 1 will executed until -stack overflow
//lets see what is stack Overflow? in next part
