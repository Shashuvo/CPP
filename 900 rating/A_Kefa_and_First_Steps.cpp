#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
       cin>>v[i];
    }
    int crnt=1,longest=1;
    for(int i=1;i<n;i++){
        if(v[i]>=v[i-1]){
            crnt++;
        }
        else{
            longest=max(longest,crnt);
            crnt=1;
        }
    }
    longest=max(longest,crnt);
    cout<<longest<<endl;
}