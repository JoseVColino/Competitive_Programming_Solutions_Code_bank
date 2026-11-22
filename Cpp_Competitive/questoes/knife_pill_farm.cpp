#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    long long t;
    cin >> t;
    while (t--){

        long long n, m;
        cin >> n >> m;
        vector<long long> v(n);
        for (long long i=0;i<n;i++) cin >> v[i];

        priority_queue<long long> menores;
        long long sum =0;
        vector<long long> dp(n,-4e18);
        for (long long i=0;i<n;i++){
            if (i < m-1){
                menores.push(v[i]);
                sum+=v[i];
            }else {
                dp[i] = m*v[i]-sum;

                if (!menores.empty() && v[i] < menores.top()){
                    sum-=menores.top();
                    menores.pop();
                    menores.push(v[i]);
                    sum+=v[i];
                }
                
                //cout << "topo: " << menores.top() << "\nsum: " << sum << '\n' << "dp[" << i << "]: " << dp[i] << "\n\n";
            }
    
        }

        long long res = -4e18;
        for (long long i=m-1;i<n;i++){
            res = max(res, dp[i]);
        }
        cout << res << '\n';
    }
    return 0;
}