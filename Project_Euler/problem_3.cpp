#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n){
    if (n < 0 || n == 0 || n == 1){
        return false;
    }

    bool flag = true;
    for (int i=2; i<n;i++){
        if (n % i == 0){
            flag = false;
            break;
        }
    }
    return flag;
}

// int findLargestPrimeFactor(long long n) {
//     long long p;

//     vector<int> seen;
//     seen.push_back(0);

//     for (long long i = 0; i < n; i++)
//     {
        
        
//     }

// }

int main(){
    for (int i=0; i<100;i++){
        if (isPrime(i)) {
            cout << i << " is prime!" << "\n";
            continue;
        }
        cout << i << "\n";
    }
    return 0;
}