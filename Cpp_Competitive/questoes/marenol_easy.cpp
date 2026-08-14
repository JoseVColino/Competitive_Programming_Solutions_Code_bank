#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,l, i=0;
    int evens1=0, odds1=0, evens2=0,odds2=0;
    string s1,s2;
    
    cin >> t;
    
    while (t--){
        evens1=0, odds1=0, evens2=0,odds2=0, i=0;
        cin >> l;
        cin >> s1;
        cin >> s2;

        for (char c : s1){
            if (c == '1'){
                if (i % 2 == 0){
                    evens1++;
                } else {
                    odds1++;
                }
            }

            i++;
        }

        i=0;
        for (char c : s2){
            if (c == '1'){
                if (i % 2 == 0){
                    evens2++;
                } else {
                    odds2++;
                }
            }

            i++;
        }

        if ((evens1 == evens2) && (odds1 ==odds2)) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
        
    }


    return 0;
}