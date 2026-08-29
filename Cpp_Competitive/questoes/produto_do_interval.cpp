#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    while (cin >> n >> k){
        int v[n];
        for (int i=0;i<n;i++) cin >> v[i];
        while (k--){
            char op;
            cin >> op;
            if (op == 'C'){
                int i, val;
                cin >> i >> val;
                v[i-1] = val;
            } else {
                int i, j;
                cin >> i >> j;
                bool pos = true;
                bool zero = false;
                for (int p=i-1; p <= j-1; p++){
                    if (v[p] == 0) {
                        zero = true; 
                        break;
                    } 
                    if (v[p] < 0) pos = !pos;
                }
                if (zero){
                    cout << '0';
                } else {
                    cout << ((pos) ? '+' : '-');
                }
            }

        }
        cout << '\n';
    }
}