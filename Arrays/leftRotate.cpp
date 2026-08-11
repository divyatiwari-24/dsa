#include<bits/stdc++.h>
using namespace std;

void leftRotate(vector<int>& arr, int d) {
    int n = arr.size();
    d = d % n; // Handle cases where d >= n
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int d = 2;
    leftRotate(arr, d);
    for (int i : arr) {
        cout << i << " ";
    }
    return 0;
}