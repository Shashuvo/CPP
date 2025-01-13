#include <bits/stdc++.h>
using namespace std;
 
int solve(int n, int m)
{
    int s = 0;
    s = n + n/(m - 1);
    if (n%(m - 1) == 0)
        s -= 1;
    return s;
}
 
int main()
{
    int n, m;
    cin >> n >> m;
    cout << solve(n,m) << endl;
}