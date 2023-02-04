#include <bits/stdc++.h>

using namespace std;

int LongestSumIncreasingSum(vector<int> &nums){

    int N = nums.size();
    int maxLen = 1;
    vector<int> dp(N + 1);
    for(int i = 0; i < N; i++)
        dp[i] = nums[i];
    for (int i = 1; i < N; i++){
        for (int j=0; j < i; j++){
            if (nums[i]> nums[1]){
                dp[i] = max(dp[i], nums[i] + dp[j]);
                maxLen = max(maxLen, dp[1]);
            }
        }
    }
    return maxLen;
}

int main()
{
    
    return 0;
}

