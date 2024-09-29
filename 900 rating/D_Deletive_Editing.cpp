#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        vector<int>cnt(26,0);
        for(auto u:t){
            cnt[u-'A']++;
        }
        string temp="";
        for(int i=s.size()-1;i>=0;i--){
            if(cnt[s[i]-'A']>0){
                temp+=s[i];
                cnt[s[i]-'A']--;
            }
        }
        reverse(temp.begin(),temp.end());
        if(temp==t){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}