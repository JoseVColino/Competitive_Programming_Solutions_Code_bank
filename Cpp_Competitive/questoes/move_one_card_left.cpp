#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> aux(n+1,0);
    long long curr_sum=n;
    for (int i =0;i<n;i++) {
        cin >> v[i];
        aux[v[i]]++;
    }
    long long sum = 0;
    int locked = n;
    for (int i =0;i<n;i++) {
        aux[v[i]]--;
        curr_sum--;
        sum += curr_sum -aux[locked]; 
        locked = v[i];
    }
    sum++; 

    cout << sum  << endl;
}