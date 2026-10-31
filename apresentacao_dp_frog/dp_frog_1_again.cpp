#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> dp(n);
    dp[0] = 0;
    for (int i=0;i<n;i++) cin >> p[i];
    dp[1] = abs(p[1] - p[0]);
    for (int i =2; i<n;i++){
        dp[i] = min(
            dp[i-1] + abs(p[i] - p[i-1]),
            dp[i-2] + abs(p[i] - p[i-2])
        );
    }

    cout << dp[n-1];
    return 0;
}