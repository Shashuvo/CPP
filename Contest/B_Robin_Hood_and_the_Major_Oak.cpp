#include<bits/stdc++.h>
using namespace std;
long long int nsquaresum(long long int x){
    return((x*(x+1))/2);
}
int main()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int n,k,sum=0;
        cin>>n>>k;
        long long int sumn=nsquaresum(n);
        long long int sumnk=nsquaresum(n-k);
        sum=sumn-sumnk;
        if(sum%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}