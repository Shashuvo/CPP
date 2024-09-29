#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int f=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]){
                swap(s[i],s[i+1]);
                f=1;
            }
        }
        if(f==1){
            cout<<"YES"<<endl<<s<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}