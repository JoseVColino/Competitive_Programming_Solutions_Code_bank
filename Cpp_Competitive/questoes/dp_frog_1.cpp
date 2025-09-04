// https://atcoder.jp/contests/dp/tasks/dp_a
#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> heights(n, 0);
    vector<int> dp(n, (1<<30));

    for (int i =0; i< n; i++){
        cin >> heights[i];
    }
    dp[0] = 0;
    dp[1] = abs(heights[0] - heights[1]);
    for (int i=2; i<n ;i++){
        dp[i] = min(
            dp[i-1] + abs(heights[i-1] - heights[i]),
            dp[i-2] + abs(heights[i-2] - heights[i])
        );
    }

    cout << dp[n-1] << endl;
    return 0;
}