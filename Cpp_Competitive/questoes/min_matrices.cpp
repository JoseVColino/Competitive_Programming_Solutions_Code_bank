#include <bits/stdc++.h>
using namespace std;


int main(){
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;

        bool possible = k >= n && k <= 2*n-1;
        if (!possible){
            cout << -1 << '\n';
            continue;
        }
        vector<pair<int,int>> pos;
        int counter=0;
        int n_princi = k-n;
        for (int i = 0;i<n;i++){
            if (n_princi){
                pos.push_back({0,i});
                n_princi--;
                counter++;
            } else {
                pos.push_back({i-counter,i});
            }
            //cout << pos[i].first << pos[i].second << '\n';
        }
        //cout << '\n';
        sort(pos.begin(),pos.end());

        int count =0;
        int num = n+1;
        for (int i =0;i<(int)n;i++){
            for (int j=0;j<(int)n;j++){
                if (count < (int)pos.size() && i == pos[count].first && j == pos[count].second){
                    cout << count+1 << ' ';
                    count++;
                } else {
                    cout << num << ' ';
                    num++;
                }
            }
            cout << '\n';
        }
    }
}