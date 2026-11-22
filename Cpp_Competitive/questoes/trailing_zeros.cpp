#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n;
    cin >> n;
    long long zeros=0;
    while (n/5 >= 1){
        zeros += n/5;
        n/=5;
    }

    cout << zeros << endl;
}