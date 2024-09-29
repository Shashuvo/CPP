#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,ans=0;
        cin>>n;
        int a[n],maxi=INT_MIN;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            ans=max(ans,a[i]+(i+1)/2 + (n - i)/2);

        }
        cout<<ans<<endl;
    }
}