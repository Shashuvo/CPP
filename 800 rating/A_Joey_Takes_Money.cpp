#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        long long int k=1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            k*=a[i];
        }
        k+=n-1;
        k*=2022;
        cout<<k<<endl;
    }
}