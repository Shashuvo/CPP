#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        set<int>xs;
        set<int>ys;
        for(int i=0;i<3;i++){
        int x,y;
        cin>>x>>y;
        xs.insert(x);
        ys.insert(y);
    }
    if(xs.size()==3 || ys.size()==3){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
}