#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,cnt=0,sum=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>=k){
                sum+=a[i];
            }
            else if(sum==0){
                continue;
            }
            else if(a[i]==0){
                cnt++;
                sum--;
            }
        }
        cout<<cnt<<endl;
    }
}