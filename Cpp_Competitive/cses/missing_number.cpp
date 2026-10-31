#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    long long n;
    cin >> n;
    long long sum=0;
    for (long long i =1;i<n;i++){
        long long a;
        cin >>a;
        sum +=a;
    }
    cout << (((1+n)*n)/2)-sum << '\n';

}