#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int cnt = 1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == cnt)
                cnt++;
        }

        cout << (n - cnt + k) / k << endl;
    }
}