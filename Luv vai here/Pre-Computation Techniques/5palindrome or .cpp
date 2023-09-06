#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n,q;
        cin >>n >>q;

        string s;
        cin >>s;

        while(q--)
        {
            int l,r;
            cin >>l >>r;
            int hash[26];
            for(int i=0; i<26; i++)
            {
                hash[i]=0;
            }
            l--;r--;
            for(int i=l; i<=r; i++)
            {
                hash[s[i]-'a']++;
            }

            int oddcnt=0;
            for(int i=0; i<26; i++)
            {
                if(hash[i]%2!=0) oddcnt++;
            }

            if(oddcnt>1) cout<< "NO" <<endl;
           else cout<< "NO"  <<endl;
        }
    }
    return 0;
}

//0(t*(n+q*(26+n+26)))
//0(t*q*n) = 10 *10^5 * 10^5

//so we optimize the code.