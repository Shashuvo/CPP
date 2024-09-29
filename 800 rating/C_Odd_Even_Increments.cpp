#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while (t--){
        int n,even1=0,even2=0,odd1=0,odd2=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i%2==0){
                if(a[i]%2==0){
                    even1=1;
                }
                else{
                    odd1=1;
                }
            }
            else{
                if(a[i]%2==0){
                    even2=1;
                }
                else{
                    odd2=1;
                }
            }
        }
        if(even1==1 && odd1==1){
                cout<<"NO"<<endl;
            }
            else if(even2==1 && odd2==1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
    }
}