#include<bits/stdc++.h>
using namespace std;

int checkArraySorted(vector<int> arr){
    for(int i = 0 ; i<arr.size()-1;i++){
        if(arr[i] > arr[i+1]){
            return 0; // Not sorted
        }
    }
    return 1; // Sorted
}