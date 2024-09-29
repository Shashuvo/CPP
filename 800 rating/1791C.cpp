#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0,j=n-1;i<n/2;i++,j--){
            if(s[i]==s[j]){
                break;
            }
            else{
                cnt++;
            }
        }
        cout<<n-2*cnt<<endl;
    }
}