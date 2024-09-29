#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,i,ans=0;
        cin >> n;
        vector <int> v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        for(i=1;i<n-1;i++)
        {
            ans=max(ans,v[i]-v[0]);
        }
        for(i=0;i<=n-1;i++)
        {
            ans=max(ans,v[n-1]-v[i]);
        }
        for(i=1;i<n;i++)
        {
            ans=max(ans,v[i-1]-v[i]);
        }
        cout << ans << endl;
    }
    return 0;
}