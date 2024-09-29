#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mini=0,maxi=0,s;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>a[maxi]){
            maxi=i;
        }
        if(a[i]<=a[mini]){
            mini=i;
        }
    }
    if(maxi>mini){
        s=(maxi-1)+(n-mini)-1;
    }
    else{
        s=(maxi-1)+(n-mini);
    }
    cout<<s<<endl;
}