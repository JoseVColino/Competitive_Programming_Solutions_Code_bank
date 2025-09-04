// https://judge.beecrowd.com/pt/problems/view/1517

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef struct {
    int x;
    int y;
    int t;
} point_in_time;

typedef struct {
    int x;
    int y;
    int t;
    int apls;
} state;


bool comparar_tempos(point_in_time p1, point_in_time p2){
    return p1.t > p2.t;
}

int main(){
    while (true){
        int M, N, K, X, Y;
        cin >> M >> N >> K;
        
        vector<point_in_time> macas(K);
        if (M == 0 && N == M && K== N) exit(0);
        
        for (int i=0;i<K;i++){
            cin >> macas[i].x >> macas[i].y >> macas[i].t;
        }

        int maxtime = macas[K-1].t;
        vector<state> dp(maxtime+1);
        cin >> X >> Y;
        dp[0] = {X,Y,0,0};

        sort(macas.begin(),macas.end(),comparar_tempos);

        for (point_in_time m1: macas){
            for (int t = maxtime; t>=m1.t;t--){
                dp[t] = max(dp[t], dp[m1.t]);
            }
        }

        for (int i=0;i<=maxtime;i++){
            cout << dp[i] << endl;
        }
    }
    return 0;
}