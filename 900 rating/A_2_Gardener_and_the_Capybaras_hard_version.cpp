#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s, a, b, c;
    cin >> s;  // First take input before using s

    int x = s.size();  // Size of the string

    // Case 1: if s starts with "aa", "bb", or "ba"
    if ((s[0] == 'a' && s[1] == 'a') || (s[0] == 'b' && s[1] == 'b') || (s[0] == 'b' && s[1] == 'a')) {
        a = s[0];
        b = s[1];
        c = s.substr(2, x - 2);  // Take the rest of the string as c
        cout << a << " " << b << " " << c << endl;
        return;
    }

    // Case 2: if s starts with "ab" and there's another 'a' after position 1
    if (s[0] == 'a' && s[1] == 'b') {
        for (int i = 2; i < x; i++) {
            if (s[i] == 'a') {
                a = s[0];  // 'a' is the first character
                b = s.substr(1, i - 1);  // 'b' will be the substring from index 1 to i-1
                c = s.substr(i, x - i);  // 'c' will be the substring from i to the end
                cout << a << " " << b << " " << c << endl;
                return;
            }
        }

        // Case 3: If all characters after "ab" are 'b's
        a = s.substr(0, x - 2);  // 'a' will be the substring from 0 to x-3
        b = s[x - 2];  // Second last character
        c = s[x - 1];  // Last character
        cout << a << " " << b << " " << c << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}