#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long int x, y, k;
        cin >> x >> y >> k;
        long long int cont = 0;
        while(y % x != y-x && k > 0){
            cont += y % x;
            k--;
            x+=1;
            y+=1;
        }
        cont += k*(y-x);
        cout << cont << "\n";
    }
    return 0;
}