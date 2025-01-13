#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        vector<int>v(k);
        vector<int>s(k+1);
        for(int i=0;i<k;i++){
            cin>>v[i];
            s[v[i]]++;
        }
        int n,m;
        k=k-2;
        for(int n=1;n<=k;n++){
            if(s[n]>0 && k%n==0){
                if(s[k/n]>0){
                    cout<<n<<" "<<k/n<<endl;
                    break;
                }
            } 
        }
    }
}