#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    long long unsigned a; 
    cin >> a;
    long long unsigned last = a;
    long long unsigned sum=0;
    for (int i =1;i<n;i++){
        cin >> a;
        if (a < last) {
            sum += last-a;
            a = last;
        }
        last = a;
    }
    cout << sum << '\n';
}