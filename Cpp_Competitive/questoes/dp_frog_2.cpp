#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, k;
    cin >> n >> k;
    vector<int> heights(n);
    for (int i = 0; i < n; i++) cin >> heights[i];
    vector<int> dp(n, INT_MAX);
    
    dp[0] = 0;

    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= k && i-j >= 0; j++) {
            dp[i] = min(dp[i], dp[i-j] + abs(heights[i] - heights[i-j]));
        }
    }

    cout << dp[n-1] << endl;
}
