#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        int prev=0,maxi=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>v[i];
            maxi=max(maxi,v[i]-prev);
            prev=v[i];
        }
        
        maxi=max(maxi,2*(x-prev));
        cout<<maxi<<endl;
    }
}