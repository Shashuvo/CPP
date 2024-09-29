#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,i;
    cin >> n >> k;
    if(n%2==0)
    {
        i=n/2;
    }
    else{
        i=(n+1)/2;
    }
    if(k<=i){
        cout << (k*2)-1 <<endl;
    }
    else{
        cout << (k-i)*2 << endl;
    }
}