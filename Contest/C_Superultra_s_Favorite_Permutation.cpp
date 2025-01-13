#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if (n<=1){
        return false;
    }
    for(int i=2;i*i<=n;++i){
        if(n%i==0){
            return false;
        }
    }  
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        if(n<5){
            cout<<-1<<endl;
            continue;
        }
        for(int i=1;i<=n;i++){
            if(i%2==1 && i!=5){
                v.push_back(i);
            }
        }
        v.push_back(5);
        v.push_back(4);
        for(int i=1;i<=n;i++){
            if(i%2==0 && i!=4){
                v.push_back(i);
            }
        }
         for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}