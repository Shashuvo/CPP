#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s,s1;
        cin>>s;
        int cnt=0;
        s1[0]='L';
        s1=s1[0]+s;
        if(s.size()==2 && s[0]==s[1]){
            cout<<1<<endl;
        }
        else{
            for(int i=1;i<s1.size();i++){
            if(s1[i]!=s1[i+1]){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        cout<<cnt<<endl;
        }
    }
}