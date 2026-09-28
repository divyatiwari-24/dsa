
#include<iostream>
#include<bits/stdc++.h>
#include<vector>

int majorityElement(std::vector<int> v){
    std::unordered_map<int,int> mpp;
    for(int i= 1; i<v.size();i++){
        mpp[v[i]]++;
    }
    for(auto it:mpp){
        if(it.second>(v.size()/2)){
            return it.first;
        }
    }
    return -1;
}