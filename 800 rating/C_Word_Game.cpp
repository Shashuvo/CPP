#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<string,int>m;
        string s[3][n+1];
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                cin>>s[i][j];
                m[s[i][j]]++;
            }
        }
        for(int i=0;i<3;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                if(m[s[i][j]]==1){
                    sum+=3;
                }
                else if(m[s[i][j]]==2){
                    sum+=1;
                }
            }
            cout<<sum<<" ";
        }
        cout<<endl;
    }
}