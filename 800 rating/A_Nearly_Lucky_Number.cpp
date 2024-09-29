#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if((s[i]=='4')||(s[i]=='7'))
            cnt++;
    }
    if(cnt==4||cnt==7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
