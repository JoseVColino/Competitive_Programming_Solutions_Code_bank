#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        int least, med, most;
        cin >> a >> b >> c;
        least = min({a,b,c});
        most = max({a,b,c});
        med = a+b+c - least - most;

        if (least + med < most){
            cout << med;
        } else {
            cout << most - least;
        }
        cout << '\n';
    }
}