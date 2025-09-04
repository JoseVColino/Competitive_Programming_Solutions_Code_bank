// https://judge.beecrowd.com/pt/problems/view/1961
#include <bits/stdc++.h>

using namespace std;

int main() {
    int pulo;
    int n_canos;

    cin >> pulo;
    cin >> n_canos;

    vector<int> canos(n_canos);

    for (auto& x : canos) {
        cin >> x;
    }
    
    bool failed = false;
    int current_cano = canos[0];
    for (int i = 1; i < canos.size(); i++) {

        if (abs(current_cano - canos[i]) <= pulo) {
            current_cano = canos[i];
        } else {
            failed = true;
        }

    }

    if (failed) {
        cout << "GAME OVER" << endl;
    } else {
        cout << "YOU WIN" << endl;
    }
    return 0;
}