#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        unordered_map<int,int> freq;

        int arr[n];
        for (int i =0;i<n;i++) {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        int mex = 0;
        bool flag = true;
        while (1){
            int f_mex = freq[mex];
            if (f_mex >=3) {
                mex++;
                continue;
            }
            if (f_mex == 2) {
                mex++;
                break;
            }
            if (f_mex == 1){
                mex++;
                if (mex <=1){
                    flag = false;
                }
                break;
            }
            break;
        }

        if (!flag){
            cout << "NO" << '\n';
            continue;
        }
        unordered_map<int,int> freq_print;
        cout << "YES" << '\n';
        for (int i =0;i<n;i++){
            freq_print[arr[i]]++;
            if (arr[i] < mex) {
                if (freq_print[arr[i]] == 1){
                    cout << 'A';
                } 
                else if (freq_print[arr[i]] == 2){
                    cout << 'B';
                }
                else if (freq_print[arr[i]] == 3){
                    cout << 'C';
                }
                else {
                    cout << 'C';
                }
            } else {
                cout << 'C';
            }
                
        }
        cout << '\n';

    }
}