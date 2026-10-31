#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i =0;i<n;i++) {
            cin >> v[i];
        }

        
        vector<int> aux;
        vector<int> op;
        bool flag = false;
        for (int i =0;i<n;i++){
            if (v[i] != i+1){
                aux.push_back(v[i]);
            }
        }
        int m=aux.size();
        int j=m-1;
        for (int i =0;i<n;i++){
            if (v[i] != i+1){
                op.push_back(aux[j]);
                j--;
                continue;
            }
            op.push_back(v[i]);
        }
        for (int i=1;i<n;i++){
            if (op[i-1] > op[i]) {
                flag=true;
                break;
            }
        }
        if (flag){
            cout << "NO" << '\n';
            continue;
        }
        cout << "YES" << '\n';

    }
}