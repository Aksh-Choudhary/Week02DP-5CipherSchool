#include <bits/stdc++.h>

using namespace std;

bool subsetSum(vector<int> &coins, int Sum){
    int N = coins.size();
    vector<vector<int>> dp (N + 1, vector<int>(Sum + 1, INT_MAX));
    for (int i = 0; i < N; i++) {
        dp[i][0] = 0;
    }
    for (int s = 1; s <= Sum; s++) { 
        for (int j= 1; j <= N; j++) {
            if (s >= coins[j-1]) {
                if (dp[j][s - coins[j - 1]] < INT _MAX)
                    dp[j][s] = min(1 + dp[j-1][s- coins[j-1]], dp[j-1][s]);
            } else {
                dp[j][s] = dp[j-1][s];
            }
        }
    }
}

int main()
{
    
    return 0;
}

