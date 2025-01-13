#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, total=0, ans=0;
    cin>>n;
    while(n--){
        long long x;
        cin >> x;
        if( x == -1 ){
            if(!total) ans++;
            else total--;
        }
        else total+=x;
    }
    cout<< ans <<endl;
}
