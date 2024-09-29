#include <bits/stdc++.h>
using namespace std;
int main()
 {
    int t;
    cin >> t;
    while (t--){
         int n,cnt=0;
         cin>>n;
         string s;
         cin>>s;
         sort(s.begin(),s.end());
         for(int i=0;i<n;i++){
            if(i==0){
                cnt+=2;
            }
            else if(s[i]==s[i-1]){
                cnt++;
            }
            else{
                cnt+=2;
            }
         }
         cout<<cnt<<endl;
    }
}