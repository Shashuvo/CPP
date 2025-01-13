#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    vector<int>a(13);
    for(int i=1;i<13;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int cnt=0,sum=0;
    for(int i=12;i>=1;i--){
        if(sum<k){
            sum+=a[i];
            cnt++;
        }
    }
    if(sum<k){
        cout<<-1<<endl;
    }
    else{
        cout<<cnt<<endl;
    }
}