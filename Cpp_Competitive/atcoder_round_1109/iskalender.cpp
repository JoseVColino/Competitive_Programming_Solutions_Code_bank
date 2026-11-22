#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int t =0, foo;
    cin >> t;
    while (t--) {
        cin >> foo;
        cin >> s;
        int longest = 0;
        int curr =0;
        for (char c : s){
            if (c == '#'){
                curr++;
            } else {
                curr = 0;
            }

            longest = max(longest, curr);
        }
        cout << longest+1/2 << '\n';
    }


    return 0;
}