#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>x;
        vector<int>v;
        int sum=0,ld=9;
        while(sum<x&&ld>0){
            v.push_back(min(x-sum,ld));
            sum+=ld;
            ld--;
        }
        if(sum<x){
            cout<<-1;
        }
        else{
            reverse(v.begin(),v.end());
            for(auto u:v){
                cout<<u;
            }
        }
        cout<<endl;
    }    
}
