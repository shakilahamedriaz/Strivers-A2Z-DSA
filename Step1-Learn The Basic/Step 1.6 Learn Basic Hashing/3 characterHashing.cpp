#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the String ";
    cin >> s;
    
    //hashing
    int  hash[26]={0};   //totoal letter 26
    //for small letter 26,, for all capital and small 256 will apply
    for(int i=0; i<s.size(); i++)
    {
        hash[s[i]-'a']++;  //to get index 1-26
    }

    int time;
    cout << "total taken test : ";
    cin >> time;

    char c; // Move the declaration of 'c' outside the while loop
    while (time--)
    {
        char c;
        cout << "Enter the char to count occurrences: ";
        cin >> c;
        
       cout << "Total number of Frequency :" << c << " is: ";
       cout << hash[c-'a'] << endl;

       //inorder to get index
 
    }
     

    return 0;
} 