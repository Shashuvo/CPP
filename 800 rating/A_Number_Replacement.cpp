#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,f=0;
        cin>>n;
        int a[n];
        string s;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cin>>s;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]==a[j] && s[i]!=s[j]){
                    f=1;
                    break;
                }
            }
        }
        if(f==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}