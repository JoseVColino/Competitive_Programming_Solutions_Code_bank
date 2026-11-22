#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 2e5;
    vector<bool> prime(n+5,true);

    for (int i =2;i*i <= n+1;i++){
        if (prime[i]) {
            for (int j=i*i;j<=n+1;j+=i){
                prime[j] = false;
            }
        }
    }
    
    int t;
    cin >> t;

    while (t--){
        int num;
        cin>> num;
        cout << ((prime[num+1]) ? "YES" : "NO") << '\n';

    }

    return 0;
}