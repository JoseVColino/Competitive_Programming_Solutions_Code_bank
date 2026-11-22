//Q dijktra com dpzinha 
#include <bits/stdc++.h>
using namespace std;
#define INF ((long long) LLONG_MAX/4)
typedef pair<long long, long long> ii;
typedef pair<long long, ii> trio;
typedef vector<ii> vii;

long long N, M, K;
vector<vector<long long>> dp;
vector<vector<trio>> LG;

void dijkstra(){
    
    dp.assign(N, vector<long long>(K+1, INF));
    dp[0][0] = 0;
    priority_queue<ii, vector<ii>, greater<ii>> Q;
    Q.push(ii(0, 0));
    while(!Q.empty()){
        long long u = Q.top().second; Q.pop();
        
        for(auto e : LG[u]){
            long long v = e.first, w = e.second.first, p = e.second.second;
            long long minimo = *min_element(dp[v].begin(), dp[v].end());
            dp[v][0] = min(dp[v][0], dp[u][0] + w);
            for(long long i = 1;i<=K;i++){
                dp[v][i] = min({dp[v][i], dp[u][i] + w, dp[u][i-1] + p});
                
            }
            if(*min_element(dp[v].begin(), dp[v].end()) < minimo){
                Q.push(ii(*min_element(dp[v].begin(), dp[v].end()), v));
            }
        }
    }
    
}

int main(){	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long a, b, w, p;
    cin >> N >> M >> K;
    LG.resize(N+1);
    for(long long i = 0; i<M;i++){
        cin >> a >> b >> w >> p;
        if(p == -1){
            LG[a-1].push_back(trio(b-1, ii(w,INF)));
            LG[b-1].push_back(trio(a-1, ii(w,INF)));
            continue;
        }
        LG[a-1].push_back(trio(b-1, ii(w,p)));
        LG[b-1].push_back(trio(a-1, ii(w,p)));
        
    }
    
    dijkstra();
    
    cout << *min_element(dp[N-1].begin(), dp[N-1].end()) << "\n";
    

}