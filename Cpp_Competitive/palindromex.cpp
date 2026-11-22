#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    //ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    while(t > 0){
        t--;
        int n;
        cin >> n;
        vector<int> v(2*n);
        for(int i = 0; i < 2*n; i++){
            cin >> v[i];
        }
        vector<int> pilha;
        vector<int> mapa(n,0);
        int popando = 0;
        int mex = 1;
        for(int i = 0; i < 2*n; i++){
            if(!pilha.empty() && pilha[pilha.size()-1] == v[i]){
                mapa[pilha[pilha.size()-1]] = 1;
                pilha.pop_back();
                popando = 1;
            }
            else if(pilha.size() >= 2 && popando == 0 && pilha[pilha.size()-2] == v[i]){
                mapa[pilha[pilha.size()-1]] = 1;
                mapa[pilha[pilha.size()-2]] = 1;
                pilha.pop_back();
                pilha.pop_back();
                popando = 1;
            }
            else{
                if(popando == 1){
                    pilha.clear();
                    if(mapa[0] == 1){
                        int achado = 0;
                        for(int j = 1; j < n; j++){
                            if(mapa[j] == 0){
                                achado = 1;
                                mex = max(mex,j);
                                break;
                            }
                        }
                        if(achado == 0){
                            mex = n;
                        }
                    }
                }
                popando = 0;
                pilha.push_back(v[i]);
                mapa.assign(n,0);
                
            }
        }
        if(popando == 1 && mapa[0] == 1){
            int achado = 0;
            for(int j = 1; j < n; j++){
                if(mapa[j] == 0){
                    achado = 1;
                    mex = max(mex, j);
                    break;
                }
            }
            if(achado == 0){
                mex = n;
            }
        }
        cout << mex << "\n";
    }
}