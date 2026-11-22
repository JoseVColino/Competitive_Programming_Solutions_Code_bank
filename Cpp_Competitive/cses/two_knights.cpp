#include <bits/stdc++.h>

using namespace std;

long long two_knights(long long k){
    return (k*k*(k*k-1))/2 - (k-1)*(k-2)*4;
}

int main(){
    long long n;
    cin >> n;
    for (int i =1;i<=n;i++){
        cout << two_knights(i) << '\n';
    }
}