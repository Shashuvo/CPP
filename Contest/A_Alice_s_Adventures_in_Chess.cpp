#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        int x=0,y=0;
        for(int i=0;i<1000;i++){
            for(int i=0;i<n;i++){
                if(s[i]=='E'){
                x++;
            }
            else if(s[i]=='N'){
                y++;
            }
            else if(s[i]=='S'){
                y--;
            }
            else{
                x--;
            }
            if(x==a && y==b){
                cout<<"YES"<<endl;
                return;
            }
            }
        }
         cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}