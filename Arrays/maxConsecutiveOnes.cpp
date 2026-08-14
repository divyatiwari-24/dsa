#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int maxCount = 0; // To keep track of the maximum count of consecutive 1s
    int currentCount = 0; // To keep track of the current count of consecutive 1s

    for (int num : nums) {
        if (num == 1) {
            currentCount++; // Increment current count if we encounter a 1
            maxCount = max(maxCount, currentCount); // Update maxCount if currentCount is greater
        } else {
            currentCount = 0; // Reset current count if we encounter a 0
        }
    }

    return maxCount; // Return the maximum count of consecutive 1s found
}