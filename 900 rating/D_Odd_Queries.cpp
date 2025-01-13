#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,q,i;
        cin >> n>> q;
        vector <long long> v(n);
        for ( i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector <long long> prefix(n,0);
        prefix[0]=v[0];
        for ( i = 1; i < n; i++)
        {
            prefix[i]=prefix[i-1]+v[i];
        }
        
        while (q--)
        {
            long long l,r,k,sum=0;
            cin >>l>>r>>k;
            l--;
            r--;
            sum=prefix[n-1];
            sum -= prefix[r];
            if (l > 0)
                sum -= prefix[l - 1];
            sum += ((r - l + 1) * k);
            if(sum%2!=0){
             cout << "YES" << endl;
            }
            else{
                cout <<"NO"<<endl;
            }
        }
    }
}