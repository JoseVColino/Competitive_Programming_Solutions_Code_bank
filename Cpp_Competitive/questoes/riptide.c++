#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b, c;
    int t;

    cin >> t;

    while (t--){
        cin >> a >> b >> c;
        int least = min({a,b,c});
        int most = max({a,b,c});
        int med = a+b+c-least-most;

        cout << min(med-least,most-med) << "\n";
    }


    return 0;
}