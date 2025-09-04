// https://atcoder.jp/contests/abc168/tasks/abc168_d

#include <bits/stdc++.h>

using namespace std;

vector<int> bfs(vector<int> graph[],int size, int start=1) {
    vector<int> final_signs;
    queue<int> to_visit;
    vector<bool> visited(size+1, false);
    vector<int> parent(size+1, 0);
    visited[1] = true;
    to_visit.push(start);

    while (!to_visit.empty()) {
        int current = to_visit.front();
        to_visit.pop();
        for (int connected: graph[current]) {
            if (!visited[connected]) {
                to_visit.push(connected);
                parent[connected] = current;
                visited[connected] = true;
            }
        }
    }
    
    return parent;
}

int main(){
    int N,M;
    int Nstart, Nend;
    vector<int> output;
    cin >> N >> M;

    vector<int> adj[N+1];
    for (int i=0; i<M;i++){
        cin >> Nstart >> Nend;
        adj[Nstart].push_back(Nend);
        adj[Nend].push_back(Nstart);
    }

    output = bfs(adj, N, 1);

    bool had_success = true;
    for (size_t i = 2; i< output.size(); i++){
        if (output[i] == 0) { had_success = false; break; }
    }

    if (had_success){
        cout << "Yes" << endl;
        for (size_t i = 2; i< output.size(); i++){
            cout << output[i] << endl;
        }
    } else {
        cout << "No" <<endl;
    }
    return 0;
}