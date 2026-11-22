#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n = 0;
        cin >> n;
        if (n < 4) {
            cout << -1 << '\n';
            continue;
        } else {
            for (int i =0;i<n;i++){
                if (i == 0){
                    cout << 4 << ' ';
                }
                else if (i ==3 ) {
                    cout << 1 << ' ';
                }
                else {
                    cout << i+1 << ' ';
                }
            }
            cout << '\n';
        }
    }
}