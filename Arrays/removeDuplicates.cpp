#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if (n = 0) {
        return 0;
    }
    int i = 0;
    for (int j = 1;j < n;j++) {
        if (arr[j] != arr[i]){
            arr[i++] = arr[j];
            i++;
        }
}
return i +1;
}