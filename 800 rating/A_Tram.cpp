#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,maxi=INT_MIN;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        sum-=a;
        sum+=b;
        maxi=max(maxi,sum);
    }
    cout<<maxi<<endl;
}