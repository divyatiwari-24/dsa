#include<bits/stdc++.h>
using namespace std;

vector<int> twoSumHashMap(vector<int>& nums, int target) {
    unordered_map<int, int> numMap; // Create a hash map to store numbers and their indices

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i]; // Calculate the complement

        // Check if the complement exists in the hash map
        if (numMap.find(complement) != numMap.end()) {
            return {numMap[complement], i}; // Return the indices of the two numbers
        }

        // Store the current number and its index in the hash map
        numMap[nums[i]] = i;
    }

    return {}; // Return an empty vector if no solution is found
}

vector<int> twoSumTwoPointers(vector<int>& nums, int target){
    sort(nums.begin(), nums.end()); // Sort the array
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            return {left, right};
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return {};
}