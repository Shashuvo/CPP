#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        sort(str.begin(),str.end());
       if(str=="a"){
            cout<<"1"<<endl;
       }
       else{
            cout<<(int)str[n-1]-'a'+1<<endl;
       }
    }
    return 0;
}