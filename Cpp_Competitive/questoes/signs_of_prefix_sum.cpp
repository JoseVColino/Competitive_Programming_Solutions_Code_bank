#include <bits/stdc++.h>
using namespace std;

int main(){
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int repetitions=1;
        vector<pair<char,int>> rep;
        if (n == 1){
            rep.push_back({s[0],1});
        }else {
            for (int i =1;i<n;i++){
                if (s[i-1] == s[i]){
                    repetitions++;
                } else {
                    rep.push_back({s[i-1],repetitions});
                    repetitions=1;
                }
            }
            if (s[n-1]== '0' ||s[n-1]== '+' ||s[n-1]== '-') rep.push_back({s[n-1],repetitions});
        }
        bool flag_inv=false;
        bool flag_2=false;
        bool flag_3=false;
        unordered_set<char> syms;
        if (rep[0].first=='0'){
            cout << -1 << '\n';
            continue;
        }
        for (int i=0;i<(int)rep.size();i++){
            char c = rep[i].first;
            syms.insert(c);
            if ((c == '0' && rep[i].second > 1)){
                flag_inv = true;
                break;
            }


            if (i != (int)rep.size()-1){

                if (rep[i].second % 2 == 0 || c != '0' && rep[i+1].first != '0' && c != rep[i+1].first){
                    flag_2 = true;
                }
            }

        }
        if (rep.size()>2){
            for (int i=2;i<(int)rep.size();i++){
                bool meio_par = rep[i-1].first != '0' && rep[i-1].second == 2;
                bool pontas_validas = rep[i-2].first != '0' && rep[i].first != '0';
                if (meio_par && pontas_validas){
                    flag_3= true;
                    break;
                }
            }
        }

        if (flag_inv) {
            cout << -1 << '\n';
            continue;;
        }
        if (!flag_2){
            cout << 1 << '\n';
            continue;;
        }
        if (flag_3){
            cout << 3 << '\n';
            continue;;
        }
        cout << 2 << '\n';
    }
}