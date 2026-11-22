#include <bits/stdc++.h>
using namespace std;

bool pertence(char c, vector<char> v){
    for(int i = 0; i < v.size(); i++){
        if(v[i] == c){
            return true;
        }
    }
    return false;
}

int main(){

    string cadeia;
    vector<char> mod0 = {'0','3','6','9'};
    vector<char> mod1 = {'1','4','7'};
    vector<char> mod2 = {'2','5','8'};
    cin >> cadeia;
    vector<int> nova_cadeia(cadeia.length(),0);

    for(int i = 0; i < cadeia.length(); i++){
        if(pertence(cadeia[i],mod0)){
            nova_cadeia[i] = 0;
        }
        else if(pertence(cadeia[i],mod1)){
            nova_cadeia[i] = 1;
        }
        else if(pertence(cadeia[i],mod2)){
            nova_cadeia[i] = 2;
        }
        else{
            nova_cadeia[i] = -1;
        }
    }

    int cont = 0;
    int mod_atual = 0;
    int streak = 0;

    for(int i = 0; i < nova_cadeia.size(); i++){
        cout << nova_cadeia[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < nova_cadeia.size(); i++){
        if(nova_cadeia[i] == -1){
            mod_atual = 0;
            streak = 0;
        }
        else if(nova_cadeia[i] == 0){
            streak++;
            cont += streak;
        }
        else if(nova_cadeia[i] == 1){
            mod_atual += 1;
            if(mod_atual % 3 == 0){
                mod_atual = 0;
                streak++;
                cont += streak;
            }
        }
        else if(nova_cadeia[i] == 2){
            mod_atual += 2;
            if(mod_atual % 3 == 0){
                mod_atual = 0;
                streak++;
                cont += streak;
            }
        }
    }

    cout << cont << "\n";

    return 0;
}