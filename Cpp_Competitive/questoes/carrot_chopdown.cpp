#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
        int n, m;
        cin >> n >> m;
        vector<int> cut_vals(m,0);
        vector<int> v(n);

        for (int i =0;i<n;i++){
            cin >> v[i];
        }  
        sort(v.begin(),v.end());
        int first_i =0;

        for (int i =0;i<n;i++){
            if (v[first_i] != v[i]) first_i = i;
            cut_vals[v[i]]+=n-first_i;
            if (v[i] % 2 == 0){
                if (cut_vals[v[i]] == 0){
                    cut_vals[v[i]/2] += 2;
                    cut_vals[v[i]/2] += n - first_i;
                } else {
                    cut_vals[v[i]/2] += 2;
                }
            }
        }       
        auto i = max_element(v.begin(),v.end());

        cout << *i << '\n';
    }

    return 0;
}