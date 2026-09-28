#include<iostream>
#include<bits/stdc++.h>

int main(){
    std::vector<int> arr = {0, 1, 2, 0, 1, 2};
    //initialize pointers
    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;
    //classification loop 
    while(mid<=high){
        if(arr[mid]==0){
            std::swap(arr[low],arr[mid]);
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            std::swap(arr[mid],arr[high]);
            high--;
        }
    }
    //print the sorted array
    for(int i=0;i<arr.size();i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}