#include <bits/stdc++.h>

using namespace std;

int knapsack(const vector<int> &price, const vector<int> &weight, int W){
    
    int N price.size();
    vector<vector<int>> dp (N + 1, vector<int>(W + 1, 8));
    
    for (int i = 1; i <= N; i++) {
        int wt = weight[i - 1], p = price[i - 1];
        for (int w = 1; w <= W; w++) {
            dp[i][w] = dp[i - 1][w];
            if (w >= wt) {
                dp[i][w] = max(dp[i][w], p + dp[i - 1][w - wt]);
            }
       }
    }
    
    return dp[N] [W];]
}

int main()
{
    
    return 0;
}

