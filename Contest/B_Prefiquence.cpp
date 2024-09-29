#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,i=0,j=0,cnt=0;
        cin>>n>>m;
        string s1;
        string s2;
        cin>>s1>>s2;
        while(i<n && j<m){
                if(s1[i]==s2[j]){
                    cnt++;
                    i++;
                }
                j++;
            }
        cout<<cnt<<endl;
    }
}