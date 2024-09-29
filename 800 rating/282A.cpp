#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int x=0;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        string statement;
        getline(cin, statement);

        if (statement[0] == '+' || statement[2] == '+') {
            ++x;
        } else {
            --x;
        }
    }

    cout << x << endl;
    return 0;
}