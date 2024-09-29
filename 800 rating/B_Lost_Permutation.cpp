#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int>a(n);
        int sum=0,maxi=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            maxi=max(maxi,a[i]);
        }
        s=sum+s;
        int sm=0,cnt=0;
        for(int i=1;sm<s;i++){
            sm+=i;
            cnt=i;
        }
        if(sm!=s||maxi>cnt||cnt<=n){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}