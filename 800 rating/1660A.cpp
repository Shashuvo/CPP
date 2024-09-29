#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int a,b,sum=0;
        cin>>a>>b;
        b=b*2;
        if(a==0){
            cout<<"1"<<endl;
        }
        else{
            sum=a+b+1;
            cout<<sum<<endl;
        }
    }
}