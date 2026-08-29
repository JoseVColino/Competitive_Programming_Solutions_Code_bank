#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c, n;

    cin >> c >> n;

    vector<int> az(n);
    for (int i=0;i<n;i++) cin >> az[i];

    int k = c/n;
    int dmin=1000000, dmax=-100000;
    for (int i=0;i<n;i++){
        dmax = max(dmax, az[i]-i*k);
        dmin = min(dmin, az[i]-i*k);
    }

    if (dmax - dmin < k) {
        cout << 'S\n';
    } else {
        cout << 'N\n';
    }
}