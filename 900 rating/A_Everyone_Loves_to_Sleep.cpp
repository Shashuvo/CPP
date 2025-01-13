#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--){
        int n,h,m;
        cin>>n>>h>>m;
        int totalm=60*h+m; //373
        int ans=24*60; //1440
        for(int i=0;i<n;i++){
            cin>>h>>m;
            int nt=60*h+m-totalm; //103
            if(nt<0){
                nt+=24*60;
            }
            ans=min(ans,nt);//
        }
        cout<<ans/60<< " "<<ans%60<<endl;
    }
}