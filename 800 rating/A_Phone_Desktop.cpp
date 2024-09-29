#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y; 
        int a=(y+1)/2;
        x=x-(a*15-y*4);
        x=max(x,0);
        a+=(x+14)/15;
        cout<<a<<endl;
    }
}