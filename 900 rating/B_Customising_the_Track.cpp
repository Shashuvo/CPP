#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long sum=0;
        vector<long long>v(n);
        for(long long i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        long long m=sum%n;
        long long ans=m*(n-m);
        cout<<ans<<endl;
    }
}