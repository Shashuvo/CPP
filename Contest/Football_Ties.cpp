#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x%3==0||y%3==0){
            cout<<0<<endl;
        }
        else{
            x=x%3;
            cout<<x<<endl;
        }
    }
}