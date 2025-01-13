#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,maxi=INT_MIN,mini=INT_MAX,cnt1=0,cnt2=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        maxi=max(maxi,a[i]);
        mini=min(mini,a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]==maxi)cnt1++;
        if(a[i]==mini)cnt2++;
    }
    if(maxi==mini){
        cout<<0<<endl;
    }
    else{
        cout<<n-cnt1-cnt2<<endl;
    }
}