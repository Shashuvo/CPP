#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    string s;
    cin>>s;
    while(s.find("WUB")!=string::npos){
        s.replace(s.find("WUB"),sizeof("WUB")-1," ");
    }
    cout<<s<<endl;
}