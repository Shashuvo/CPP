#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int ans=0;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            ans=__gcd(ans,abs(x-i));
        }
        cout<<ans<<endl;
    }
}