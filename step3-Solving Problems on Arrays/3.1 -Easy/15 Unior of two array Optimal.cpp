#include <iostream>
#include <vector>
#include <set>

using namespace std; 

vector<int> sortedArray(vector<int> a, vector<int> b) {
   
   int n1=a.size();
   int n2=b.size();
   int i=0;
   int j=0;
   vector<int>unionArr;

//https://youtu.be/wvcQg43_V8U?t=3337
//current position of the problem 

   return unionArr;

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
