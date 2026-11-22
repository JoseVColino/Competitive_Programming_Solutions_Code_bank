#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define INF 0x3f3f3f3f
#define REP(i,a,b) for(int i = a; i < b; i++)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define SORT(v) sort(v.begin(), v.end())
#define SORTD(v) sort(v.rbegin(), v.rend())
#define SUM(v) accumulate(v.begin(), v.end(), 0)

typedef pair<int,int> ii;
typedef  long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<ii> vii;

// (int) 'a' = 97, (int) 'A' = 45

void solve(){

    int n,m;
    cin >> n >> m;
    map<pair<int,int>,int> dp;
    vector<vector<pair<int,int>>> g(n+1);
    int u, v, c;
    vector<int> no_more_than_2(n+1);
    while (m--){
        cin >> u >> v >> c;
        g[u].PB(MP(v,c));
    }


    set<pair<int,int>> visited; // i = vértice, j = última cor -> checar
    queue<pair<int,int>> fila;
    dp[MP(1,0)] = 0;
    fila.push(MP(1,0));
    visited.insert(MP(1,0));
    pair<int,int> atual;
    int found = 0;
    while (!fila.empty()){
        // for (const auto& [key,dist]: dp){
        //     cout << key.first << " " << key.second << ": " << dist << endl;
        // }
        // cout << '\n';
        atual = fila.front(); fila.pop();
        for (auto next : g[atual.first]){
            if (visited.find(next) != visited.end() || atual.second == next.second || no_more_than_2[next.first] > 2){
                continue;
            }
            dp[next] = dp[atual] + 1;
            fila.push(next);
            visited.insert(next);
            no_more_than_2[next.first]++;
            if (next.first == n){
                found = next.second;
                break;
            }
        }
        if (found) break;
    }

    // for (const auto& [key,dist]: dp){
    //     cout << key.first << " " << key.second << ": " << dist << endl;
    // }
    // cout << '\n';
    // cout << '\n';
 
    // for (int i = 0; i <= n; ++i) {
    //     cout << i << ": ";
    //     for (const auto& [u, v] : g[i]) {
    //         cout << "(" << u << ", " << v << ") ";
    //     }
    //     cout << "\n";
    // }
    // cout << "\n";

    if (!found){
        cout << -1 << '\n';
        return;
    }
    cout << dp[MP(n,found)] << '\n';
    
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}