#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the String ";
    cin >> s;
    
    //hashing
    int  hash[256]={0};  
    //fcapital and small 256 will apply
    for(int i=0; i<s.size(); i++)
    {
        hash[s[i]]++;  //to get index 1-26
    }

    int time;
    cout << "total taken test : ";
    cin >> time;

    char c;
    while (time--)
    {
        char c;
        cout << "Enter the char to count occurrences: ";
        cin >> c;
        
       cout << "Total number of Frequency :" << c << " is: ";
       cout << hash[c] << endl;
  
 
    }
     

    return 0;
} 