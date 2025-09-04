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
















// primeira tentativa tentando achar um par valor peso ótimo, não é dessa maneira que se resolve o problema da mochila.
/*
int main(){
    int n, W;
    cin >> n >> W;

    long long int dp[n][2][2];
    int data[n][2];

    for (int i =0;i<n;i++){
        cin >> data[i][1] >> data[i][0];
    }

    dp[0][0][0] = 0;
    dp[0][0][1] = data[0][0];
    dp[0][1][0] = 0;
    dp[0][1][1] = data[0][1];

    for (int i=1; i< n;i++){
        dp[i][0][0] = max(dp[i-1][0][0], dp[i-1][0][1]);
        dp[i][0][1] = max(
            dp[i-1][1][0] + data[i][1] <= W ? dp[i-1][0][0] + data[i][0] : dp[i-1][0][0],
            dp[i-1][1][1] + data[i][1] <= W ? dp[i-1][0][1] + data[i][0] : dp[i-1][0][1]
        );
        dp[i][1][0] = dp[i-1][0][1] > dp[i-1][0][0] ? dp[i-1][1][1] : dp[i-1][1][0];
        dp[i][1][1] = dp[i-1][0][1] > dp[i-1][0][0] ? dp[i-1][1][1] + data[i][1] <= W ? data[i][1] + dp[i-1][1][1] : dp[i-1][1][1] : dp[i-1][1][0] + data[i][1] <= W ? dp[i-1][1][0] + data[i][1] : dp[i-1][1][0];
    }



    cout << max(dp[n-1][0][0], dp[n-1][0][1]) << endl;

    return 0;
}
*/