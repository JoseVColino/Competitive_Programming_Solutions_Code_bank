#include <bits/stdc++.h>
using namespace std;

// implementação ingênua recalculando a cada index
// complexidade de tempo O(2^n) (tenebroso)

int N;
vector<int> h;

int minCost(int i) {
    if (i == 0){
        return 0;
    } 
    
    int cost1 = minCost(i - 1) + abs(h[i] - h[i - 1]);
    
    if (i == 1){
        return cost1;
    }
    
    int cost2 = minCost(i - 2) + abs(h[i] - h[i - 2]);
    
    return min(cost1, cost2);
}

int main() {
    cin >> N;
    h.resize(N);
    for (int i = 0; i < N; i++) cin >> h[i];
    cout << minCost(N - 1) << "\n";
}
