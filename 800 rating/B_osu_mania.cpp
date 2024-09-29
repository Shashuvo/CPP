#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            string str;
            cin>>str;
            ans[i]=int(str.find('#'));
        }
        reverse(ans.begin(),ans.end());
        for(int u:ans){
            cout<<u+1<<" ";
        }
        cout<<endl;
    }
}