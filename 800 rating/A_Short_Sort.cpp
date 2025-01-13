#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string al="abc";
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<3;i++){
            if(s[i]!=al[i]){
                cnt++;
            }
        }
        if(cnt<=2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}