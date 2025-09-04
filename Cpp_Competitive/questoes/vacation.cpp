#include <bits/stdc++.h>
using namespace std;

int main(){
    int days;
    cin >> days;

    int dp[days][3];
    int data[days][3];
    int best_prev;
    int best;
    for (int i = 0; i < days; i++) {
        cin >> data[i][0] >> data[i][1] >> data[i][2];
    }

    for (int i=0; i<3;i++){
        dp[0][i] = data[0][i];
    }

    for (int i = 1; i < days; i++) {
        for (int j = 0; j<3;j++){
            best_prev = max(
                dp[i-1][(j+1) % 3], dp[i-1][(j+2) % 3]
            );
            dp[i][j] = best_prev + data[i][j];
        }
    }
    

    best = max(
        {dp[days-1][0],
        dp[days-1][1],
        dp[days-1][2]}
    );
    cout << best << endl;

    return 0;
}