#include<bits/stdc++.h>
using namespace std;
void solve(){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n-1;i++){
            int sum=abs(v[i]-v[i+1]);
            if(sum!=5 && sum!=7){
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
            return;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
       solve();
    }
}