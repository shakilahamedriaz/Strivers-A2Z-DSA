//Longest Subarray with given Sum K(Positives)




#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size(); // size of the array.

    int len = 0;
    for (int i = 0; i < n; i++) { // starting index
        for (int j = i; j < n; j++) { // ending index
            // add all the elements of
            // subarray = a[i...j]:
            long long sum = 0;
            for (int K = i; K <= j; K++) {
                sum += a[K];
            }

            if (sum == k)
                len = max(len, j - i + 1);
        }
    }
    return len;
}

int main()
{
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}



/*
example: 

i=0, j=0: [2] sum=2 (not equal to k)
i=0, j=1: [2, 3] sum=5 (not equal to k)
i=0, j=2: [2, 3, 5] sum=10 (equal to k) - Update len to 3 (j - i + 1)
i=0, j=3: [2, 3, 5, 1] sum=11 (not equal to k)
i=0, j=4: [2, 3, 5, 1, 9] sum=20 (not equal to k)

i=1, j=1: [3] sum=3 (not equal to k)
i=1, j=2: [3, 5] sum=8 (not equal to k)
i=1, j=3: [3, 5, 1] sum=9 (not equal to k)
i=1, j=4: [3, 5, 1, 9] sum=18 (not equal to k)

i=2, j=2: [5] sum=5 (not equal to k)
i=2, j=3: [5, 1] sum=6 (not equal to k)
i=2, j=4: [5, 1, 9] sum=15 (not equal to k)

i=3, j=3: [1] sum=1 (not equal to k)
i=3, j=4: [1, 9] sum=10 (equal to k) - Update len to 2 (j - i + 1)

i=4, j=4: [9] sum=9 (not equal to k)

*/