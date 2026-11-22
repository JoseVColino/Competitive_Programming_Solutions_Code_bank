#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){

        int n;
        cin >> n;
        vector<bool> v(n, false);
        for (int i =0;i<n;i++){
            int a;
            cin >> a;
            v[i] = a;
        }

        int ones=0;
        int res = 2;
        for (bool i : v) {
            if (i == 0){
                ones++;
            }
        }
        if (ones < 2){
            cout << -1 << '\n';
            continue;
        }
        if (v[0] == 0 ){
            res--;
        }
        if (v[n-1] == 0){
            res--;
        }
        cout << res << '\n';
    }
}