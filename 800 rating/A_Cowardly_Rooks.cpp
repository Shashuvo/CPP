#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m;
        for(int i=1;i<=m;i++){
            cin>>x>>y;
        }
        if(n==m){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}