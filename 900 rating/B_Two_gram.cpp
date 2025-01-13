#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r=0;
    cin>>n;
    string str,ans;
    cin>>str;
    for(int i=0;i<n-1;i++){
        int cnt=0;
        for(int j=0;j<n-1;j++){
            if(str[j]==str[i]&&str[j+1]==str[i+1]){
                cnt++;
            }
            if(r<cnt){
                r=cnt;
                ans=string(1,str[i])+string(1,str[i+1]);
            }
        }
    }
    cout<<ans<<endl;
}