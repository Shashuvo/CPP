#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int f1=0,f2=0;
        int temp=max(a,b);
        a=min(a,b);
        b=temp;
        for(int i=a;i<=b;i++)
        {
            if(i==c){
                f1=1;
            }
            if(i==d){
                f2=1;
            }
        }
        if((f1==1&&f2==1)||(f1==0&&f2==0)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}