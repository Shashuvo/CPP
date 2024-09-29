#include <bits/stdc++.h>
using namespace std;
int main() 
{
    vector<int>a;
    for(int n=1;n<1000000;n++){
        string s=to_string(n);
        int cnt=0;
        for(char digit:s){//takes character digit from string s i.e. s=101, will take 1,0,1
            if(digit!='0'){
                cnt++;
            }
        }
        if(cnt==1){
            a.push_back(n);
        }
    }
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int count=0;
        for(int n:a){//takes integer n from a vector
            if(n<=x){
                count++;
            }
        }
        cout<<count<<endl;
    }
}