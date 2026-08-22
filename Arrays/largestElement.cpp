#include<bits/stdc++.h>
using namespace std;    

int largestElement(vector<int> arr) {
    int largest = INT_MIN;

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }//returning the compared using simple comparsion 
    return largest;
}