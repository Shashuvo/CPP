#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,x,sum=0;
        cin>>a>>b>>c;
        x=abs(c-b)+ c;
        if(a==x){
            cout<<3<<endl;
        }
        else if(a<x){
            cout<<1<<endl;
        }
        else if(a>x){
            cout<<2<<endl;
        }
    }
}