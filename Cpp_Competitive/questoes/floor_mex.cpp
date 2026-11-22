#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >>n;
        vector<int> v(n);
        for (int i=0;i<n;i++) cin >> v[i];
        int maxn=0;
        unordered_set<int> b;
        for (int i=0;i<n;i++){
            if (v[i]>0){
                for (int j=maxn;j<v[i];j++){
                    b.insert(j*i+1);
                    maxn = max(maxn,j*i+1);
                }
            }
        }
        cout << maxn<< '\n';
        cout << b.size() << '\n';
        for (auto& e : b){
            cout << e << ' ' ;
        }
        cout << "\n\n";

    }
}