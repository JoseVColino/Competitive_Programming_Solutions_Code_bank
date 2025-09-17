#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> h;
vector<int> dp;

int main(){
    cin >> n;
    h.resize(n);
    for (int i = 0; i < n;i++) cin >> h[i];
    dp[0] = 0;
    dp[1] = abs(h[0] - h[1]);
    for (int i = 2; i < n; i++) {
        dp[i] = min(
            dp[i-1] + abs(h[i]-h[i-1]),
            dp[i-2] + abs(h[i]-h[i-2])
        );        
    }

    return 0;
}