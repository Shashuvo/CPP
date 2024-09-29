#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        int sum=0;
        for (int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        if(sum%2==0)
        {
            cout<<0<<endl;
            continue;
        }
        int ans=1e18;
        for (int i=0;i<n;i++)
        {
            int cnt=0;
            if(v[i]%2!=0)
                while(v[i]%2!=0)
                {
                    v[i]/=2;
                    cnt++;
                }
            else
                while(v[i]%2==0&&v[i]>0)
                {
                    v[i]/=2;
                    cnt++;
                }
            ans=min(ans,cnt);
        }
        cout<<ans<<endl;
    }
}
