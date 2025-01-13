#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,s;
    cin>>n>>s;
    vector<pair<int,int>>v;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    int ans=0;
    if(n==1 && v[0].second==1 && s!=1){
        ans=s;
    }
    else{
        for(int i=0;i<n;i++){
        maxi=max(maxi,v[i].second);
        if(maxi==v[i].second){
            ans=v[i].second+v[i].first;
        }
    }
    }
    cout<<ans<<endl;
    return;
}
int main()
{
    solve();
}