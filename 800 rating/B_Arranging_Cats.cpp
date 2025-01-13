#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        int add=0,rmv=0;
        for(int i=0;i<n;i++){
            if(s1[i]<s2[i]) add++;
            else if(s1[i]>s2[i]) rmv++;
        }
        cout<<max(add,rmv)<<endl;
    }
}