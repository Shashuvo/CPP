#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n,k,sum=0;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i%k]=max(a[i%k],a[i]);
        }
        for(int i=0;i<k;i++){
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
}