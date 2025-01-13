#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,h,cnt=0;
        cin>>n;
        vector<int>v(n);
        map<int,int>m;
        for(int i=0;i<n;i++){
            cin>>h;
            m[h]++;
            cnt=max(cnt,m[h]);
        }
        cout<<n-cnt<<endl;
    }
}