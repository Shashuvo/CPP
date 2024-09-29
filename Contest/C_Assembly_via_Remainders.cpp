#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n,k=1000;
        cin>>n;
        vector<long long> x(n-1);
        vector<long long> a(n);
        for(int i=0;i<n-1;i++){
            cin>>x[i];
        }
        cout<<k<<" ";
        for(int i=0;i<n-1;i++){
            cout<<x[i]+k<<" ";
            k+=x[i];
        }
        cout<<endl;
    }
}