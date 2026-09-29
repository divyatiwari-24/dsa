#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for (char c : s) {
            // If opening bracket
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            else {
                // If stack empty or mismatch
                if (st.empty()) return false;
                
                char top = st.top();
                st.pop();
                
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }
        
        return st.empty(); // valid if nothing left
    }
};