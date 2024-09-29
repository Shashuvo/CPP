#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(q--){
        int x;
        cin>>x;
        int l=0,r=n-1;
        bool found=0;
        while(l<=r){
            int m=(l+r)/2;
            if(a[m]==x){
                found=1;
                break;
            }
            else if(x<a[m]){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        if(found==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}