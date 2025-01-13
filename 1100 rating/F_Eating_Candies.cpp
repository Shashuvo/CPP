#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int left=0;
    int right=n-1;
    int sumleft=v[0],sumright=v[n-1];
    int maxi=0;
    while(left<right){
        if(sumleft==sumright){
            maxi=max(maxi,left+1+(n-right));
        }
        if(sumleft<=sumright){
            left++;
            sumleft+=v[left];
        }
        else{
            right--;
            sumright+=v[right];
        }
    }
    cout<<maxi<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}