#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n,x=1,y;
        cin>>n;
        y=n/2;
        if(n%2!=0){
            cout<<-1<<endl;
        }
        else{
            cout<<x<<" "<<y<<endl;
        }
        
    }
}