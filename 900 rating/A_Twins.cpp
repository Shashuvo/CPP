#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,sum=0,sum1=0,cnt=0;
   cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
    sum+=v[i];
   }
   sort(v.begin(),v.end());
   sum/=2;
   for(int i=n-1;i>=0;i--){
    if(sum>=sum1){
        sum1+=v[i];
        cnt++;
    }
   }
   cout<<cnt<<endl;
}