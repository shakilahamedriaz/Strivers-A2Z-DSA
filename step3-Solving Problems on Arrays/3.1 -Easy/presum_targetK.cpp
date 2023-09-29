#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    int cur_sum = 0, ck =0 ;
    map<int,int> m ;
    m[0]=1;
    for(int i=0;i<n;i++){
        cur_sum += arr[i] ;
        int x = cur_sum - k ;
        if(m[x] == 1) {
            cout << "YES\n";
            ck = 1;
            break;
        }
        m[cur_sum]=1;
    }
    if(ck == 0) cout << "NO\n";

    return 0;
}