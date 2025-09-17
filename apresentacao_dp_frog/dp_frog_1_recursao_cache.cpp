#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> h;
vector<int> dp; // <--- memoização

int solve(int i) {
    if (i == 0) return 0;
    if (dp[i] != -1) return dp[i];

    int ans = solve(i - 1) + abs(h[i] - h[i - 1]);
    if (i > 1) {
        ans = min(ans, solve(i - 2) + abs(h[i] - h[i - 2]));
    }
    dp[i] = ans;
    return ans;
}

int main() {
    cin >> N;
    h.resize(N);
    dp.assign(N, -1); // inicializando tudo com -1, pra saber quais não foram calculados

    for (int i = 0; i < N; i++) cin >> h[i];
    
    cout << solve(N - 1) << "\n";
}
