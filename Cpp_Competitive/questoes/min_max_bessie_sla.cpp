#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<bool> s(n, false);
        int ones=0;
        for (int i = 0; i < (int)n; i++)
        {
            bool b;
            cin >> b;
            if (b) ones++;
            s[i] = b;
        }
        int zeros = n-ones;
        if (ones >= zeros){
            cout << "Bessie" << '\n';
        } else {
            cout << "Elsie" << '\n';
        }

        

    }
}