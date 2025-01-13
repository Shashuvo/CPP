#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i=0;i<n;i++){
            int l,r;
            cin>>l>>r;
            if(l<=k && k<=r){
                maxi=max(maxi,l);
                mini=min(mini,r);
            }
        }
        if(maxi==mini){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }    
}
