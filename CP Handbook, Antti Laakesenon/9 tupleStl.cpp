#include<bits/stdc++.h>
using namespace std;

int main()
{

    tuple < string, int , int > tp;

    tp = make_tuple( "shakil", 10, 50);
    cout<< "The initial value of tuple are : ";
    cout<< get<0>(tp)<< " " << get<1>(tp) << " "<< get<2>(tp)<< "\n";

    

    cout<< "The modified value of the tuple are : ";
    get<0>(tp) = "She";
    get<2>(tp) = 55;

    cout<< get<0>(tp)<< " " << get<1>(tp) << " "<< get<2>(tp)<< "\n";


    return 0;
}