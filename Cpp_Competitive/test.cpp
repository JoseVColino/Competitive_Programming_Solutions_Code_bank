#include <bits/stdc++.h>

using namespace std;


int lengthOfLongestSubstring(string s) {
    if (s.empty()) return 0;
    
    vector<bool> seen(256, false);
    int max_len = 0;
    int start = 0;
    int end = 0;

    for (int i = 0; i < (int)s.length(); i++) {
        char c = s[i];
        
        if (!seen[c]) {
            seen[c] = true;
            end = i;
        } else {
            while (seen[c]) {
                seen[s[start]] = false;
                start++;
            }
            seen[c] = true;
            end = i;
        }

        max_len = max(max_len, end - start + 1);
    }

    return max_len;
}

int main(){

    string s;
    cin >> s;
    cout << lengthOfLongestSubstring(s);
    return 0;
}