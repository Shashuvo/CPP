#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<int,int>&p1,const pair<int,int>&p2)
{
    if(p1.first>p2.first) return 1;
    else if(p1.first==p2.first) return(p1.second<p2.second);
    return 0;
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    int cnt=0;
    sort(v.begin(),v.end(),cmp);
    for(auto u:v){
        if(u==v[k-1]) cnt++;
    }
    cout<<cnt<<endl;
}