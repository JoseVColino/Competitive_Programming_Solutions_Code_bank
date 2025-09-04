#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int casas; 
        cin >> casas;
        if (casas == 64){
            unsigned long long int grains = ((unsigned long long int)1 << casas-1) - 1;  // precise for 0..63
            unsigned long long int kg = (unsigned long long)(grains / 6000);
            cout << kg << " Kg\n";
            continue;
        }
        unsigned long long int grains = ((unsigned long long int)1 << casas) - 1;  // precise for 0..63
        unsigned long long int kg = (unsigned long long)(grains / 12000);

        cout << kg << " Kg\n";
    }
    return 0;
}
