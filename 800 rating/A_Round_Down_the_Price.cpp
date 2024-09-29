#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        string m;
        cin >> m;
        int m1= stoi(m);
        int k = 1;
        while (k * 10 <= m1) {
            k *= 10;
        }
        cout <<m1 - k<< endl;
    }
    return 0;
}