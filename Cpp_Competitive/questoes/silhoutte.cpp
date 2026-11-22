#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;

    cin >> t;

    while (t--){
        int n;
        cin >> n;
        vector<long long unsigned> b(n);

        for (long long unsigned &x : b){
            cin >> x;
        }

        map<long long unsigned,int> freq;
        map<long long unsigned,long long unsigned> ans;
        
        for (const auto& x: b) freq[x]++;

        long long last=-1;
        long long slast=-1;
        bool err_flag = false;
        for (const auto& [element, qtd] : freq) {

            if (last == -1){
                if (element != 0){
                    err_flag = true;
                    break;
                }
                last = element;
                continue;
            } 

            if ((element - last) % freq[last] != 0) {
                err_flag=true;
                break;
            }

            ans[last] = ( element - last ) / freq[last];
            if (slast != -1 && ans[last] <= ans[slast]){
                err_flag=true;
                break;
            }

            slast = last;
            last = element;
        }

        if (slast == -1 && last != 0){
            err_flag = true;
        } else if (slast == -1 && last == 0) {
            ans[last] = 1;
        } else {
            ans[last] = ans[slast] + 1;
        }


        
        if (err_flag) {
            cout << -1 << "\n";
        } else {
            

            for (auto& x : b) {
                cout << ans[x] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}