#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        string owned;
        cin >> owned;
        
        int res=0;
        bool flag = false;
        for (int i=0;i<n;i+=k){
            flag = false;
            for (int j=0;j<k;j++){
                if (owned[i+j] == '0'){
                    flag = true;
                }
                if (flag){
                    break;
                }
            }
            if (!flag){
                res++;
            }
        }

        cout << res << '\n';
    }
}