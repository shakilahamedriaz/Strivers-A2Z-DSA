#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s= "Shakil"; //every character stored at index 0,1,2,3
    cout<<s[1]<<endl;
    cout<<s[5]<<endl;


    //Array Length:

    string s2= "ShakilAhamedRiaz";
    cout<< "The original string is : "<<s2<<endl;
    int len= s2.size();

    s2[len-1]='S';

    cout<< "Updated String is: "<< s2<<endl;

    cout<< "array length is :"<<len<<endl;


    return 0;
}
