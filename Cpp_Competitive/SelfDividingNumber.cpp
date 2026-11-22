#include <bits/stdc++.h>

using namespace std;

int isSelfDividing(int num){
    int digit = 0;
    while (num > 0){
        digit = num % 10;
        if (digit == 0) {
            return false;
        }
        if (num % digit != 0) {
            return false;
        }
        num /= 10;
    }
    return true;
}

vector<int> main(){
    int l, r;
    cin >> l >> r;
    vector<int> nums;

    for (int i=l; i<=r;i++){
        if (isSelfDividing(i)){
            nums.push_back(i);
        }
    }
    
    return nums;
}