#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,s,r;
        cin>>n>>s>>r;
        vector<int>v;
        int d=s-r;
        while(r>=d){
            v.push_back(d);
            r-=d;
        }
        if(r>0){
            v.push_back(r);
        }
        for(int i=0;i<v.size() && v.size()+1<n;){
            if(v[i]==1){
                i++;
                continue;
            }
            --v[i];
            v.push_back(1);
        }
        v.push_back(d);
        sort(v.begin(),v.end());
        for(auto u:v) cout<<u<<" ";
        cout<<endl;
    }
}