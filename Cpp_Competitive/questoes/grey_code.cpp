#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<bool> state(n,0);
    set<vector<bool>> seen;

    for(auto b: state){
        cout << b;
    }
    cout << "\n";
    seen.insert(state);
    int flip = 0;
    while (flip < n) {
        state[flip].flip();
        if (seen.find(state) != seen.end()){
            state[flip].flip();
            flip++;
            continue;
        }
        flip = 0;
        seen.insert(state);
        for(auto b: state){
            cout << b;
        }
        cout << "\n";
    }

}