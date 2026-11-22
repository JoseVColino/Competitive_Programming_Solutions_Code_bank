#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        vector<int> ones;
        for (int i=0;i<n;i++) {
            cin >> a[i];
            if (a[i] == 1 or a[i] == -1){
                ones.push_back(i);
            }
        }
        int last=-2, max_range=0;
        int beg=-1, b=-1;
        for (int i =0;i< (int)ones.size();i++){
            if (last== -2){
                last=ones[i];
                continue;
            }
            if (max_range < ones[i]-last+1){
                max_range = ones[i]-last+1;
                beg = last;
                b = ones[i];
            }
        }

        if (beg == -1){
            for (int i =0;i<n;i++){
                if (a[i] == -1){
                    cout << 1 << ' ';
                } else {
                    cout << a[i] << ' ';
                }

            }
        } else {
            for (int i =0;i<n;i++){
                if (i == beg || i == b){
                    cout << '1' << ' ';
                    continue;
                }
                if (a[i] == -1) {
                    cout << '0' << ' ';
                    continue;
                }
                cout << a[i] << ' ';
            }
        }
        cout << '\n';

    }
}