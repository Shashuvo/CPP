#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++) 
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        if(v[0]==v[n-1]){
             cout<<1LL*n*(n-1)<<endl; 
             continue;
        }
        int min=0,max=n-1;
        while(v[min]==v[0])++min;
        while(v[max]==v[n-1])--max;
        long long l=min;
        long long r=n-max-1;
        cout<<2LL*l*r<<endl;
    }
}