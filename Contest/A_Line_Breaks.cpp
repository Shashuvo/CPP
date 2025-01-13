#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string>v(n);
        string s;
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(s.size()<=m){
                s+=v[i];
            }
            if(s.size()<=m){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}