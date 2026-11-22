#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int l;
        string s1;
        string s2;
        vector<int> ones_s1;
        vector<int> ones_s2;
        ones_s1.clear();
        ones_s2.clear();

        long long unsigned int ans=0;

        cin >> l >> s1 >> s2;

        for (int i=0;i<l;i+=2){
            if (s1[i] == '1'){
                ones_s1.push_back(i);
            }
            if (s2[i] == '1'){
                ones_s2.push_back(i);
            }
        }

        if (ones_s1.size() == ones_s2.size()){
            for (long long unsigned int i=0; i < ones_s1.size(); i++){
                ans += (abs(ones_s1[i] - ones_s2[i]) + 1) / 2;
                
            }
        } else {
            cout << -1 << '\n';
            continue; //next test case
        }

        ones_s1.clear();
        ones_s2.clear();

        for (int i=1;i<l;i+=2){
            if (s1[i] == '1'){
                ones_s1.push_back(i);
            }
            if (s2[i] == '1'){
                ones_s2.push_back(i);
            }
        }

        if (ones_s1.size() == ones_s2.size()){
            for (long long unsigned int i =0; i < ones_s1.size(); i++){
                ans += (abs(ones_s1[i] - ones_s2[i]) + 1) / 2;
            }
        } else {
            cout << -1 << '\n';
            continue; //next test case
        }

       cout << ans << '\n';

    }

    return 0;
}