#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){

        string s,str;
        int flag=0;
        cin>>str;
        s=str;
        int n=s.size();
        for(int i=0;i<(n/2)-1;i++)
        {
            if(s[i]!=s[i+1])
            {
                cout<<"YES"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"NO"<< endl;
        }
    }
}