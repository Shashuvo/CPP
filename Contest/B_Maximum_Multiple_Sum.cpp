#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i,x,k,sum2=0,ox=0;
        cin>>n;
        for ( x = 2; x <=n; x++)
        {
            k=n/x;
            int sum= x*((k*(k+1))/2);
            if(sum>sum2)
            {
                sum2=sum;
                ox=x;
            }
        }
        cout<<ox<<endl;
    }
}