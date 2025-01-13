#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s.length() % 2 == 0 && s[0] != ')' && s[s.length() - 1] != '(') {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}