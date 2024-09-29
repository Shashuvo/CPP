#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        if(a[0]%2==1){
            cout<<"YES"<<endl;
            continue;
        }
        bool f=0;
        for(int i=0;i<n;i++){
            if(a[i]%2==1){
                f=1;
                break;
            }
        }
        if(f){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}