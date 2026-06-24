#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int> rocks;
    int n, h;

    cin >> n;

    while (n--){
        cin >> h;
        rocks.push_back(h);
    }

    for (int h : rocks){
        cout << h << '\n';
    }

}