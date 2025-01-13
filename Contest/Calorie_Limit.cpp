#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int n,k,sum=0,cnt=0;
        cin>>n>>k;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        for(int i=0;i<n;i++){
            sum+=v[i];
            if(sum<=k){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }

}
