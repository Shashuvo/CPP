#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a,b,maxxx=INT_MIN;
        cin>>n;
        int x=-1;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            if(a<=10){
                maxxx=max(maxxx,b);
                if(maxxx==b){
                x=i+1;
            }
            }
        }
        cout<<x<<endl;
    }
}