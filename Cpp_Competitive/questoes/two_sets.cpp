#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;



int main() {
    ll n;
    cin >> n;
    ll soma = ((n+1)*n)/2;
    if (soma % 2 == 1){
        cout << "NO";
        return 0;
    }
    soma/=2;
    ll atual = n;
    vi set1;
    vi set2;
    while (soma != 0){   
        if (soma-atual >= 0) {
            soma-=atual;
            set1.push_back(atual);
            
        } else {
            set2.push_back(atual);
        }
        atual--;
    }
    while (atual >=1){
        set2.push_back(atual);
        atual--;
    }
    

    cout << "YES\n";
    cout << set1.size() << endl;
    for (auto& e : set1){
        cout << e << " ";
    }
    cout << "\n";
    cout << set2.size() << endl;
    for (auto& e : set2){
        cout << e << " ";
    }
    cout << "\n";
    
}