#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt1=n%2020;
        int cnt2=(n-cnt1)/2020-cnt1;
        if(cnt2>=0 && cnt2*2020+2021*cnt1==n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}