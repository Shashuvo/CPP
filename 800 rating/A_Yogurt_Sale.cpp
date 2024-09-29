#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while( t-- )
    {
        int n, a, b, x;
        cin >> n >> a >> b;
        x = ( a + b ) / n;
        if(a<=b/2){
            cout<<a*n<<endl;
        }
        else{
            cout<<a*(n%2)+b*(n/2)<<endl;
        }
    }
}