#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long unsigned x,y;
        cin >> x >> y;
        x--;
        y--;
        long long unsigned l, clock, val=0;
        l = max(x,y)+1;
        clock = (l % 2 == 0);
        val+=(l-1)*(l-1);

        if (!clock){
            if (x < l-1) {
                val+=l;
                val+=(l-1)-x;
            } else {
                val+=y+1;
            }
        } else {
            if (y < l-1) {
                val+=l;
                val+=(l-1)-y;
            } else {
                val+=x+1;
            }
        }
        cout << val << '\n';
    }

    return 0;
}