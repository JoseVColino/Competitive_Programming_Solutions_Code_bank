//https://atcoder.jp/contests/abc126/tasks/abc126_d

#include <bits/stdc++.h>

using namespace std;

vector<int> color_nodes(vector<int> graph[], int n){
    vector<int> output(n+1, 0);
    int color = 0;
    vector<bool> visited(n+1, false);
    queue<int> a_visitar;
    a_visitar.push(1);
    visited[1] = true;
    output[1] = 0;
    int current, weight, node_a_visitar;

    while (!a_visitar.empty()){
        current = a_visitar.front();
        a_visitar.pop();
        for (int i = 0; i < (int)graph[current].size(); i+=2){
            
            node_a_visitar = graph[current][i];
            if (!visited[node_a_visitar]) {  
                visited[node_a_visitar] = true;
                
                a_visitar.push(node_a_visitar);
                weight = graph[current][i+1];
                if (weight%2 == 0){
                    output[node_a_visitar] = output[current];
                } else {
                    color = 1 - output[current];
                    output[node_a_visitar] = color;
                }
            }
            else{
                continue;
            }
        }
    }



    return output;
}

int main(){
    int n;
    int origem, final, peso;
    cin >> n;

    vector<int> graph[n+1];

    for (int i = 1; i < n; i++){
        cin >> origem >> final >> peso;
        graph[origem].push_back(final);
        graph[origem].push_back(peso);
        graph[final].push_back(origem);
        graph[final].push_back(peso);
    }

    vector<int> output = color_nodes(graph, n);


    bool first = true;
    for (auto &&i : output)
    {
        if (first){
            first = false;
            continue;
        }
        cout << i << endl;
    }
    
    return 0;
}