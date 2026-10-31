#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;

    cin >> t;

    while (t--){

        int n;
        cin >> n;
        int b0=0,b13=0,b2=0;
        int arr[n];
        for (int i =0;i<n;i++) {
            cin >> arr[i];
            if (arr[i] % 4 == 0){
                b0++;
            }
            if (arr[i] % 4 == 1 || arr[i] % 4 == 3 ){
                b13++;
            }
            if (arr[i] % 4 == 2){
                b2++;
            }
        }
        cout << max({b0,b13,b2}) << '\n';
    }
}