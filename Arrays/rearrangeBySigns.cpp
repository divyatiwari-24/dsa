#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<vector>

vector<int> rearrangeBySigns(vector<int> nums){
    vector<int> pos;
    vector<int> neg;
    
    for(int i=0;i<nums.size();i++){
        if(nums[i]>=0){
            pos.push_back(nums[i]);
        }
        else{
            neg.push_back(nums[i]);
        }
    }
    vector<int> result;
    int i = 0, j = 0;
    while(i<pos.size() && j<neg.size()){
        result.push_back(pos[i]);
        result.push_back(neg[j]);
        i++;
        j++;
    }
    //add remaining positive numbers
    while(i<pos.size()){
        result.push_back(pos[i]);
        i++;
    }
    //add remaining negative numbers
    while(j<neg.size()){
        result.push_back(neg[j]);
        j++;
    }
    return result;
}