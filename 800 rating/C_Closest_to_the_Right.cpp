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
        int l=-1,r=n;
        bool found=0;
        while(l+1<r){
            int m=(l+r)/2;
            if(x<=a[m]){
                r=m;
            }
            else{
                l=m;
            }
        }
        if(found==1){
            cout<<r+1<<endl;
        }
        else{
            cout<<r+1<<endl;
        }
    }
}