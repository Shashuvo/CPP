#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t; 
    while(t--){
        string s;
        cin>>s;
        int c0=count(s.begin(),s.end(),'0');
        int c1 = count(s.begin(),s.end(),'1');
        if(min(c0,c1)%2==1){
            cout<<"DA"<<endl;
        } 
        else{
            cout<<"NET"<<endl;
        }
    }
}