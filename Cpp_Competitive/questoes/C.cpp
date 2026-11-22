#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        bitset<30> x, y, max_bit;
        int x_ent, y_ent;
        cin >> x_ent >> y_ent;
        int maximo = x_ent + y_ent;
        x = x_ent;
        y = y_ent;
        max_bit = maximo;
        bitset<30> atual= 0;
        for (int i =29;i>=0;i--){
            if (max_bit[i] != 1){
                continue;
            }
            atual.flip(i);
            if (atual.to_ulong() <= x_ent){
                continue;
            } 
            atual.flip(i);
        }
        cout << maximo << " " << x_ent-atual.to_ulong() << "\n";
    }
    return 0;
}