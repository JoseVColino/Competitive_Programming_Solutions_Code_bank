#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--){

        int l;
        cin >> l;
        string s;
        cin >> s;
        bool flag;

        for (int i =2; i<l && flag; i++){
            if (s[i-2] == s[i]){
                cout << 0 << '\n';
                break;
            }

        }
        
        if (flag) continue;

    }
    return 0;
}