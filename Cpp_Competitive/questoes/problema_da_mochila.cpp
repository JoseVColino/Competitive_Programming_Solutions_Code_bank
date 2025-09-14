#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, W;
    cin >> N>> W;
    vector<long long> w(N), v(N);
    vector<long long> dp(W+1, -(1LL<<60));

    dp[0] = 0;

    for (int i=0;i<N;i++) cin >> w[i] >> v[i];

    for (int i =0;i<N;i++){
        for (int cap = W; cap>=w[i]; cap--){
            dp[cap] = max(dp[cap], dp[cap-w[i]] + v[i]);
        }
    }

    long long ans =0;
    for (int cap =0;cap <=W;cap++) {
        cout << dp[cap] << endl;
        ans = max(ans, dp[cap]);
    }
    cout << ans << endl;

    return 0;
}
