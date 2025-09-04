// https://judge.beecrowd.com/pt/problems/view/1162

#include <bits/stdc++.h>
using namespace std;

int len_optimal_switches(vector<int> train){
    int switches=0;
    int aux;
    bool switched;
    for (size_t i = 0; i < train.size() - 1; i++) {
        switched = false;
        for (size_t j = 0; j < train.size() - 1 - i; j++) {
            if (train[j] > train[j + 1]) {
                aux = train[j];
                train[j] = train[j + 1];
                train[j + 1] = aux;
                switches++;
                switched = true;
            }
        }
        if (!switched) {
            return switches;
        }
    }

    return switches;
}

int main(){
    int t, l;
    int input;
    cin >> t;

    for (int i=0; i<t ; i++){
        cin >> l;
        vector<int> train(l);
        for (int j=0; j<l; j++){
            cin >> input;
            train.push_back(input);
        }
        int n = len_optimal_switches(train);
        cout << "Optimal train swapping takes " << n << " swaps." << endl;
    }

    return 0;
}