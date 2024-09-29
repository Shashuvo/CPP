#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        string s1;
        for(int i=9;i>=1;i--){
            if(s>=i){
                s1=char('0'+i)+s1;
                s-=i;
            }
        }
        cout<<s1<<endl;
    }
}