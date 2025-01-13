#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c,d,e,c1,c2,c3;
        cin>>c1>>c2>>c3;
        cin>>a>>b>>c>>d>>e;
        c1-=a;
        c2-=b;
        c3-=c;
        if(c1<0 ||c2<0||c3<0){
            cout<<"NO"<<endl;
            return;
        }
        int k = min(c1 , d);
        c1 -= k;
        d -= k;
        if(c1<0 ||c2<0||c3<0){
            cout<<"NO"<<endl;
            return;
        }
        k = min(c3 , d);
        c3 -= k;
        d -= k; 
        if(c1<0 ||c2<0||c3<0){
            cout<<"NO"<<endl;
            return;
        }
        k = min(c2 , e);
        c2 -= k;
        e -= k;
        if(c1<0 ||c2<0||c3<0){
            cout<<"NO"<<endl;
            return;
        }
        k = min(c3 , e);
        c3 -= k;
        e -= k;
        if(c1<0 ||c2<0||c3<0){
            cout<<"NO"<<endl;
            return;
        }
        if(d||e){
            cout<<"NO"<<endl;
            return;
        }
        cout<<"YES"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}