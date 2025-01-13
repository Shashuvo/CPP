#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int n,x=0,y=0;
        cin>>n;
        if(n==1){
            cout<<"ALICE"<<endl;
        }
        else if(n%2<=2){
            cout<<"BOB"<<endl;
        }
        else{
            cout<<"ALICE"<<endl;
        }
    }

}
