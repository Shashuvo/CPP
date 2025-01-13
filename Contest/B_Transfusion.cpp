#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> v(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        if (sum % n != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        long long m = sum / n;
        long long sumo = 0;
        for (int i = 0; i < n; i += 2)
        {
            sumo += v[i];
        }
        long long h = (n + 1) / 2;
        if (sumo == h * m)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}