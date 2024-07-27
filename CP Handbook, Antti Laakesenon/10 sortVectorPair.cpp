#include <bits/stdc++.h>
using namespace std;

int main() {
   

    vector<pair<int, int>> v;

    // Input values into pairs, in vector
    v.push_back({1, 5});
    v.push_back({2, 3});
    v.push_back({1, 2});
    v.push_back({2, 9});
    v.push_back({8, 6});
    v.push_back({8, 1});

    sort(v.begin(), v.end());

    cout << "After using sort function:\n";
    // Pairs are sorted primarily according to their first elements,
    // if first two elements are equal they, sorted
    // according to their second elements. ex :
    // output : (1,2), (1, 5),(2, 3), (2, 9), (8, 1), (8, 6);

    // Print the pairs
    for (auto& pair : v) 
    {
        cout << "(" << pair.first << "," << pair.second << ")" << ",";
    }

    return 0;
}
