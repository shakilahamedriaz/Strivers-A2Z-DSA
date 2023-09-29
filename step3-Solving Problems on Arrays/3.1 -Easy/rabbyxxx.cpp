// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void sol(){
    int n,m;
    cin >> n >> m;
    int arr[n+1];
    int pre = 0 , c=1;
    for(int i=1;i<= n;i++){
        int vl;
        cin >> vl;
        pre+=vl;
        arr[i] = pre%m ;
        if(arr[i]) c=0;
    }
    arr[0]=0;
       //for(int i=0;i<= n;i++) cout << arr[i] << " ";
    if(c){
        cout << -1 << endl;
        return;
    }
    
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i] != arr[n]) ans = max(n-i,ans);
    }
    for(int i=n;i>=0;i--){
         if(arr[i] != arr[0]) ans = max(i,ans);
    }
    cout << ans <<endl;
}
int main() {
    int t;
    cin >> t;
    while(t--) sol();
    return 0;
}