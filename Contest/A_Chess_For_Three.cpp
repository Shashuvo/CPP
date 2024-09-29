#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int x=a+b+c;
        if(a==0 &&b==0&&c==0){
            cout<<0<<endl;
        }
        else if(x%2!=0){
            cout<<-1<<endl;
        }
        else{
            if(a+b<c){
                cout<<a+b<<endl;
            }
            else{
                cout<<x/2<<endl;
            }
        }
    }
}