#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);

        for (int i =0;i<n;i++) cin >> a[i];
        for (int i =0;i<n;i++) cin >> b[i];
        int max = 0;
        for (int i =1;i<n;i++) {
            if (a[i-1] > b[i]){
                max+=a[i-1] - b[i];
            }
        }
        max += a[n-1];
        cout << max << '\n';


    }


}