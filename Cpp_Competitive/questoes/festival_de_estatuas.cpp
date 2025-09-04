#include <bits/stdc++.h>
using namespace std;

int main(){
    int tests, alvo, comp;
    int compCount;
    cin >> tests;
    for (int i =0 ;i<tests;i++) {
        cin >> compCount >> alvo;
        vector<int> comps;
        vector<int> dp(alvo+1, (1<<30));
        
        for (int j=0;j<compCount;j++){
            cin >> comp;
            comps.push_back(comp);
        }
        sort(comps.begin(),comps.end(),greater<>());
        dp[0] = 0;

        for (int comp: comps){
            for (int j=comp;j<= alvo;j++){
                dp[j] = min(dp[j], dp[j-comp] + 1);
            }
        }

        cout << dp[alvo] << endl;
    }
    return 0;
}