#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> v;
        map<int,int> down;
        int op_cost =0;
        for (auto& c : s){
            v.push_back(((int)c - 97));
        }

        int cost=0;
        
        for (int i =0; i <n/2;i++){
            int cost_op = abs(v[i]-v[n-1-i]);
            int low = min(v[i],v[n-1-i]);
            int big = max(v[i],v[n-1-i]);
            if (down.find(big) == down.end()){
                down[big] = low;
            } else {
                down[big] = min(down[big],low);
            }
        }
        sort(down.begin(),down.end());
        reverse(down.begin(),down.end());

        for (const auto& [k,v]: down){
            for (int i=k;i>v;i--){
                if (down.find(i) == down.end()){
                    down[i] = v;
                } else {
                    down[i] = min(down[i],v);
                }
            }
        }

        set<int> seen;  
        for (const auto& [k,v]: down){
            if (seen.find(v) == seen.end()){
                continue;
            }
            seen.insert(v);
            cost += k-v;
        }
        cout << cost << '\n';
    }
}