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
        for(int i=0;i<n;i++) {
            cin>>v[i];
        }

        int x=v[0];
        vector<int>b(v.begin()+1,v.end());
        sort(b.begin(),b.end());

        for(int y:b){
            if(y>x){
                x+=(y-x+1)/2;
            }
        }
        cout<<x<<endl;
    }
}