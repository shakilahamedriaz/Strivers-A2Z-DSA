#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b) {
    set<int> st;
    vector<int> Union;

    int n = a.size();
    int m = b.size();

    for (int i = 0; i < n; i++) {
        st.insert(a[i]);
    }
    for (int i = 0; i < m; i++) {
        st.insert(b[i]);
    }

    for (auto it : st) {
        Union.push_back(it);
    }

    return Union;
}

int main() {
    vector<int> a = {1, 3, 5, 7, 9};
    vector<int> b = {2, 4, 6, 8, 10};
    
    vector<int> result = sortedArray(a, b);
    
    cout << "Sorted Union: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
