#include <bits/stdc++.h>

using namespace std;

int main(){
    // Example: undirected graph with 4 nodes
    vector<int> adj[5]; // if nodes are 1-indexed

    // Add edge 1-2
    adj[1].push_back(2);
    adj[2].push_back(1);

    // Add edge 1-3
    adj[1].push_back(3);
    adj[3].push_back(1);

    // Display adjacency list in a cleaner format
    for (int i = 0; i < 5; i++){
        cout << "Node " << i << ": ";
        for (int j = 0; j < adj[i].size(); j++){
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}
