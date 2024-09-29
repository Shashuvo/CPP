#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x=0,y=0,flag=0;
        cin>>n;
        string str;
        cin>>str;
        for(int i=0;i<str.size();i++){
            if(str[i]=='U'){
            y++;
        }
        else if(str[i]=='D'){
            y--;
        }
        else if(str[i]=='R'){
            x++;
        }
        else{
            x--;
        }
        if(x==1 && y==1){
            flag=1;
            break;
        }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}