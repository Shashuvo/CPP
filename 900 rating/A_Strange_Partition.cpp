#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,x,sum2=0,sum1=0;
        cin>>n>>x;
        vector<long long>v;
        for(int i=0;i<n;i++){
            int y;
            cin>>y;
            v.push_back(y);
        }
        for(int i=0;i<n;i++){
             sum1+=v[i];
             sum2+=((v[i]+x-1)/x);
        }
        cout<<(sum1+x-1)/x<<" "<<sum2<<endl;
    }
}