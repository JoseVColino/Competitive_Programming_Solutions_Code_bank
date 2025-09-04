#include <bits/stdc++.h>
using namespace std;

long long int fib(int n){
    long long int cur=1, prev=1;
    if (n == 1 || n ==2){
        return 1;
    }
    for (int i=3; i <= n; i++) {
        cur = cur + prev;
        prev = cur - prev;
    }

    return cur % 1000;
}

long long int fib_3(int n){
    int cur=1, prev=1;
    if (n == 1 || n ==2){
        return 1;
    }
    for (int i=3; i <= n; i++) {
        cur = (cur + prev) % 1000;
        prev = (cur - prev) % 1000;
    }

    return cur;
}

int main(){
    

    cout << fib(1000000000) << endl;

    return 0;
}