#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int j = -1;

    // Find the first zero
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            j = i;
            break;
        }
    }

    // No zero found
    if (j == -1)
        return;

    // Find non-zero elements and swap them with the zero at j
    for (int i = j + 1; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main() {
    vector<int> nums = {1, 0, 2, 3, 0, 4, 0, 1};

    moveZeroes(nums);

    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}