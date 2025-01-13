#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x,y;
        int ans=0,minX=0,minY=0,maxX=0,maxY=0;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            minX=min(minX,x);
            maxX=max(maxX,x);
            minY=min(minY,y);
            maxY=max(maxY,y);
        }
        ans=maxX+maxY-minX-minY;
        cout<<ans*2<<endl;
    }
}