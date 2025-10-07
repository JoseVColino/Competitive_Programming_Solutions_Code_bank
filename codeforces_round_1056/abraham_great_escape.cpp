// https://codeforces.com/contest/2155/problem/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        if (k == n*n-1){
            cout << "NO" << "\n";
        } else {
            cout << "YES" << "\n";
            
            for (int i = 0; i < n; i++){
                for (int j = 0; j < n; j++){

                    if (k-- > 0){
                        cout << "U";
                    } else {
                        if (i != n-1){ // not in last line
                            cout << "D";
                        }
                        else if (j != n-1){ // not in last column
                            cout << "R";
                        } else {
                            cout << "L"; // last element always L
                        }
                    }
                }
                cout << "\n";
            }

        }
    }

}