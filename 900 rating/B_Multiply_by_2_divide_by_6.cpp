#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt3=0,cnt2=0;
        while(n%2==0){
            n/=2;
            cnt2++;
        }
        while(n%3==0){
            n/=3;
            cnt3++;
        }
        if(n==1 && cnt2<=cnt3){
            cout<<2*cnt3-cnt2<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}