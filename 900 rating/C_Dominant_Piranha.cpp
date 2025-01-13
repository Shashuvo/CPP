#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,maxi=0;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++) 
        {
            int x;
            cin>>x;
            v.push_back(x);
            maxi=max(maxi,v[i]);
        }
        int ans=-1;
        for(int i=0;i<n;i++){
            if(v[i]!=maxi) continue;
            if(i>0 && v[i-1]!=maxi) ans=i+1;
            if(i<n-1 && v[i+1]!=maxi) ans=i+1;
        }
        cout<<ans<<endl;
    }
}