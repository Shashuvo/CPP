#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v1,v2,v3(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v1.push_back(x);
        }
        for(int i=0;i<n;i++){
            int y;
            cin>>y;
            v2.push_back(y);
        }
        int curTime=0;
        for(int i=0;i<n;i++){
            curTime = max(curTime, v1[i]);
            v3[i] = v2[i] - curTime;
            curTime = v2[i];
        }
        for(auto u:v3){
            cout<<u<<" ";
        }
        cout<<endl;
    }
}