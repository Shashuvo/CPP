#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        vector<int>a(n);
        map<int,int>m;
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
            if(m[a[i]]<=c){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}