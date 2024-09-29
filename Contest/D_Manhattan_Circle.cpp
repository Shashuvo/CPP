#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,m,y1=0,x,x1=0,cnt=0,y;
        cin>>n>>m;
        vector<string>s(n);
        for(long long i=0;i<n;i++){
            cin>>s[i];
        }
        for(long long i=0;i<n;i++){
            for(long long j=0;j<m;j++){
                if(s[i][j]=='#'){
                    x1+=i;
                    y1+=j;
                    cnt+=1;
                }
            }
        }
        x=x1/cnt;
        y=y1/cnt;
        cout<<x+1<<" "<<y+1<<endl;
    }
}