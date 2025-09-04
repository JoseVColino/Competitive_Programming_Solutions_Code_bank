// https://atcoder.jp/contests/abc122/tasks/abc122_b
#include <iostream>

using namespace std;

int longest_ACGT_sub_string(string L) {
    int counter = 0;
    int highest = 0;

    for (char character : L) {
        if (character == 'A' ||character == 'C' ||character == 'G' ||character == 'T'){
            counter++;
        } else {
            counter = 0;
        }
        if (counter > highest){
            highest = counter;
        }
    }

    return highest;
}

int main() {
    string L;

    getline(cin, L);
    
    cout << longest_ACGT_sub_string(L) << "\n";

    return 0;
}