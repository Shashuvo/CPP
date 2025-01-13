#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(v[i]==v[j] && v[j]!=0&&v[i]!=0){
                    cnt++;
                    v[j]=0;
                    v[i]=0;
                }
            }
        }
        cout<<cnt<<endl;
    }
}