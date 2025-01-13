#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long> v(n), v2(n + 1);
    for (auto &x : v)
        cin >> x;  
    sort(v.begin(), v.end()); 
    for (int i = 0; i < n; ++i) 
        v2[i + 1] = v2[i] + v[i]; 
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        cout << v2[n - x + y] - v2[n - x] << endl;
    }
}