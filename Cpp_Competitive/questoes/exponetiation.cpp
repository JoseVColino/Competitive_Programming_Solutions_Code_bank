#include <bits/stdc++.h>
using namespace std;

long long exp(long long n){
    long long res = 2;
    while (n > 1){
        n--;
        res <<= 1;
        res %= 1000000000+7;
    }

    return res;
    
}

int main(){
    long long n;
    cin >> n;
    cout << exp(n) << "\n";

    return 0;
}