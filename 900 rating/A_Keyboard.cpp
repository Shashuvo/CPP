#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    cin>>s;
    string str1;
    cin>>str1;
    string str2={"qwertyuiopasdfghjkl;zxcvbnm,./"};
    string str3="";
    if(s=='R'){
        for(int i=0;i<str1.size();i++){
            for(int j=0;j<str2.size();j++){
                if(str1[i]==str2[j]){
                    str3+=str2[j-1];
                }
            }
        }
    }
    else{
        for(int i=0;i<str1.size();i++){
            for(int j=0;j<str2.size();j++){
                if(str1[i]==str2[j]){
                    str3+=str2[j+1];
                }
            }
        }
    }
    cout<<str3<<endl;
}