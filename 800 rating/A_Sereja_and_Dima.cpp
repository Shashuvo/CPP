#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int s = 0, d = 0, t = 1;
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if (t == 1)
        {
            if (v[i] > v[j])
            {
                s += v[i];
                i++;
            }
            else
            {
                s += v[j];
                j--;
            }
            t = 2;
        }
        else
        {
            if (v[i] > v[j])
            {
                d += v[i];
                i++;
            }
            else
            {
                d += v[j];
                j--;
            }
            t = 1;
        }
    }
    cout << s << " " << d << endl;
}