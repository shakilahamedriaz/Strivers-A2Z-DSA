#include<bits/stdc++.h>
using namespace std;

bool palindrome(int i, string &s)
{
      if(i>=s.size()/2) return 1;

      if(s[i] != s[s.size()-i-1]) return false;

      return palindrome(i+1,s);


}



int main()
{

    string s;
    cin>> s;
    
    int ans= palindrome(0,s);

    if(ans){
        cout<<"Palindrome"<<endl;
    }
    else {
        cout<< "Not palindrome"<<endl;
    }

    return 0;
}