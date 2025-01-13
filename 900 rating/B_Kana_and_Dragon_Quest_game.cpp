#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x, m;
    cin >> x >> n >> m;
    while (x > 0 && n && x / 2 + 10 < x)
    {
        n--;
        x = x / 2 + 10;
    }
    if (x <= m * 10)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
