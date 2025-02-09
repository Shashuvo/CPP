#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        s.erase(s.begin() + n-1);
        s.erase(s.begin() + n-2);
        s+='i';
        cout<<s<<endl;;
    }
}