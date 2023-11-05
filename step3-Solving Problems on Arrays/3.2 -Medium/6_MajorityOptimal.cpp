


#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v) {

     int element= v[0];
     int cnt=1;
     for(int i=0; i<v.size(); i++)
     {
        if(element==v[i])
        {
            cnt++;
        }
        else
        {
            cnt--;
            if(cnt==0)
            {
                element= v[i];
                cnt=1;
            }
        }

     }
     return element;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}
