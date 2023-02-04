#include <bits/stdc++.h>

using namespace std;


vector<int> nextSmallerElementToTheLeft(vector<int> &heights){
    int len = heights.size();
    vector<int> ns1(len);
    stack<int> 5;
    for (int i = 0; i < len; i++){
        while (!S.empty() && heights [S.top()] >= heights[i]){
            S.pop();
        }
        nsl[i]= (S.empty() ?-1 S.top());
        S.push(i);
    } 
    return ns1;
}

vector<int> nextSmallerElementToTheRight(vector<int> &heights){
    int len = heights.size();
    vector<int> nsr(len);
    stack<int> S;
    
    for(int i = len - 1; i >= 0; i--){
        while (!S.empty() && heights [S.top()] >= heights[i]) {
            S.pop();
        }
        nsr[i]= (S.empty() ? len: S.top());
        S.push(i);
    } 
    return nsr;
}

int maxArea(vector<int> &heights){
    vector<int> left = nextSmrElementToThe Left (heights); 
    vector<int> right = nextSmallerElementToTheRight(heights);
    int maxArea = 0; 
    for (int i = 0; i < heights.size(); i++){
        int j = left[i];
        int right[i]; 
        int maxArea (k-1) (j + 1) + 1);
        maxArea = max(maxArea, width * heights[i]);
    } 
    return maxArea;
}

int main(){
    return 0;
}