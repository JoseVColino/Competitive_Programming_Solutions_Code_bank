#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<long long> v(n);
        vector<long long> beg;
        vector<long long> end;
        long long seen=0;
        for (int i =0;i<n;i++) cin >> v[i];
        sort(v.begin(),v.end());
        long long last = -1;
        for (int i=0;i<n;i++){
            if (v[i] != last){
                seen++;
                beg.push_back(v[i]);
            }
            else {
                if (end.empty() || end.back() != v[i]) seen++;
                end.push_back(v[i]);
            }
            last = v[i];
        }

        reverse(end.begin(),end.end());
        cout << seen << "\n";
        for (auto& e : beg){
            cout << e << " ";
        }
        for (auto& e : end){
            cout << e << " ";
        }
        cout << "\n";

    }
}