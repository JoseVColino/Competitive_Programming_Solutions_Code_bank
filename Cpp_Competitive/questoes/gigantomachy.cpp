#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--){
        int n, m;
        cin >> n >> m;
        vector<int> bea(n);
        vector<int> ver(m);

        for (int i =0;i<n;i++) cin >> bea[i];
        for (int i =0;i<m;i++) cin >> ver[i];

        int turns_beat_bea =0;
        for (int i =0;i<n;i++){
            if (i == n-1){
                turns_beat_bea += bea[i];
            } else {
                if (bea[i+1] == 1){
                    turns_beat_bea += bea[i];
                    continue;
                }
                turns_beat_bea += bea[i] - bea[i+1]+1;
            }
        }

        int turns_beat_ver =0;
        for (int i =0;i<m;i++){
            if (i == m-1){
                turns_beat_ver += ver[i];
            } else {
                if (ver[i+1] == 1){
                    turns_beat_ver += ver[i];
                    continue;
                }
                turns_beat_ver += ver[i] - ver[i+1]+1;
            }
        }

        cout << ((turns_beat_bea>=turns_beat_ver)? 1 : 2) << '\n';

    }

}