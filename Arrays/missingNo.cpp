#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the missing number using XOR approach
    int missingNumber(vector<int>& a, int N) {
        int xor1 = 0, xor2 = 0;

        // XOR all the array elements and numbers from 1 to N-1
        for (int i = 0; i < N - 1; i++) {
            xor2 = xor2 ^ a[i];      // XOR of array elements
            xor1 = xor1 ^ (i + 1);   // XOR of numbers from 1 to N-1
        }

        xor1 = xor1 ^ N; // Include N in the XOR

        // XOR of xor1 and xor2 gives the missing number
        return xor1 ^ xor2;
    }
};

int main() {
    int N = 5;
    vector<int> a = {1, 2, 4, 5};

    Solution obj;
    int ans = obj.missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;

    return 0;
}
