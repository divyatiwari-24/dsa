//KADANE ALGORITHM
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Brute force approach 
int maxSubarraySum(vector<int> nums){
    int n = nums.size();
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += nums[j];
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}

//Optimized approach using Kadane's algorithm
int maxSubarraySumOptimized(vector<int> nums){
    int n = nums.size();
    int maxSum = INT_MIN;
    int currentSum = 0;
    for(int i=0;i<n;i++){
        currentSum += nums[i];
        maxSum = max(maxSum, currentSum);
        if(currentSum < 0){
            currentSum = 0;
        }
    }
    return maxSum;
}