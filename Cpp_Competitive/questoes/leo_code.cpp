#include <bits/stdc++.h>

using namespace std;

int main() {
    int a = 0, b = 0, n = 0, m = 0;
    
    cin>>n >>m;
    
    int adj_matrix[n][n] = {};
    
    for(int i = 0; i < m; i++){
        cin>>a >>b;
        adj_matrix[a-1][b-1] = 1;
    }
    
    cout<<"\n\n";
    
    bool v[n] = {};
    queue<int> q;
    
    v[0] = true;
    q.push(0);
    
    while(!q.empty()){
        int atual = q.front();
        q.pop();
        
        cout << atual + 1 << " ";
        
        for(int i = 0; i < n; i++){
            if(adj_matrix[atual][i] == 1 && v[i] == false){
                v[i] = true;
                q.push(i);
            }
        }
    }
    
    return 0;
}