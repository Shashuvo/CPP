#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int cnt=0;
        for(int i=n-2;i>=0;i--){
            while(v[i]>=v[i+1] &&v[i]>0){
                v[i]/=2;
                cnt++;
            }
            if(v[i]==v[i+1]){
                cout<<-1<<endl;
                return;
            }
        }
        cout<<cnt<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}