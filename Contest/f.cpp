#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin >> n;
        vector<int> v(n);
        int count=0;
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0, j = i + 1, k = j + 1; i < n; i++, j++, k++)
        {
            if (v[j] % v[i] == 0 && v[k] % v[i] == 0)
            {
                if (v[k] % v[j] != 0)
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
}

