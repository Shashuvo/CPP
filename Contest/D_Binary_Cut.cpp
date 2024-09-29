#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int sum=0,c,f=0;
        string s1=s;
        sort(s1.begin(),s1.end());
        for(int i=0;i<s.size();i++){
            if(s[i]!=s1[i]){
                f=1;
            }
        }
        if(f==0){
            cout<<1<<endl;
        }
        else{
            for(int i=0;i<s.size()-1;i++){
            c=s[i]^s[i+1];
            sum+=c;
        }
        if(sum<2){
            cout<<sum+1<<endl;
        }
        else{
            cout<<sum<<endl;
        }
        }
    }
}