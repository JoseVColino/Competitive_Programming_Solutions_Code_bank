#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >>s;


    int cm=0;
    int m=0;
    char last_c = s[0];
    for (char c : s){
        if (c == last_c) m++;
        else {
            cm = max(cm,m);
            m = 1;
        }
        last_c = c;
    }
    cm = max(cm,m);

    cout << cm;
}