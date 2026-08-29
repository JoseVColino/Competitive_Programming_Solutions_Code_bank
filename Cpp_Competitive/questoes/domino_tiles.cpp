#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){

        int l;
        cin >> l;
        string s;
        cin >> s;

        bitset<2> found;
        bitset<2> mem;
        bool flag = true;
        found.reset();
        mem.reset();

        for (int i =0;i<l;i++){
            if (s[i] != '?') {
                bool odd = i % 4 > 1;
                if (found[i%2] && (s[i] == '1') != (mem[i%2]+odd) % 2) {
                    flag = false;
                    break;
                }
                found[i%2] = true;
                mem[i%2] = ((s[i] == '1') + odd) % 2;
            }
        }
        if (!flag){
            cout << '0' << '\n';
            continue;
        }
        int ans= 0;
        for (char c : found.to_string()) ans += (c == '1');

        cout << pow(2,2-ans) << '\n';


    }
    return 0;
}