#include<bits/stdc++.h>
using namespace std;

int main()
{
    
   
    vector<tuple <int, int, int >> v;
    
    //intput values into pair, in vector
    v.push_back({2, 1, 4});
    v.push_back({1, 5, 3});
    v.push_back({2, 1, 3});

    
    sort(v.begin(), v.end());
    
    cout<< "After using sort fucntion : ";
    //output will be : (1, 5, 3), (2, 1, 3), (2, 1, 4);
    //tuple are sorted according to first elements, secondarily by the second elements etc


    //print here : 
    for (auto& tuple : v)
    {
        cout<< "(" << get<0>(tuple) << "," << get<1>(tuple) << "," << get<2>(tuple) << ")" << ",";
    }

     
    return 0;
}