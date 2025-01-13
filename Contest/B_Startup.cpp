#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(k);
        for(int i=0;i<k;i++){
            int a,b;
            cin>>a>>b;
            --a;
            v[a]+=b;
        }
        sort(v.rbegin(),v.rend());
        int sum=0;
        int mini=min(n,k);
        for(int i=0;i<mini;i++){
            sum+=v[i];
        }
        cout<<sum<<endl;
    }
}