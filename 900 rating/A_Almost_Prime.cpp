#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num[3005]={0};
    int cnt=0;
    for(int i=2;i<=n;i++){
        if(num[i]>=1) continue;
        else{
            for(int j=2*i;j<=n;j=j+i){
                num[j]=num[j]+1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(num[i]==2) cnt++;
    }
    cout<<cnt<<endl;
}