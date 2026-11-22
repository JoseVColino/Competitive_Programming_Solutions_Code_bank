#include <bits/stdc++.h>
using namespace std;

int main(){

    int n = 0, m = 0; 
    int a = 0, b = 0;
    
    cin>>n >>m;
    
    int adj[n][n] = {};
    bool visitado[n] = {false};
    queue<int> fila;

    for(int i = 0 ; i < m; i++){
        cin>>a >>b;
        adj[a-1][b-1] = 1;
    }

    visitado[0] = true;
    fila.push(0);

    while(!fila.empty()) {
        int atual = fila.front();
        fila.pop();

        for(int i = 0; i < n; i++){
            adj[atual][i]
        }
    }

    cout<<"\n\n";

    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<< adj[i][j] << " ";
        }
        cout<<"\n";
    }

    return 0;
}