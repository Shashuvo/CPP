#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
 
    while(t--)
    {
        int n;
        cin>> n;
        
        int a[n];
        int k = 0;
        
        for(int i = 0; i < n; i++)
        {
            cin>> a[i];
            if(a[i] == 2) k++;
        }
        if(k == 0) cout << 1 << endl;
        
        else if(k % 2 == 0)
        {
            int k2 = 0;
            
            for(int i = 0; i < n; i++)
            {
                if(a[i] == 2)
                {
                    k2++;
                }
                if(k2 == k / 2)
                {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
        else cout << -1 << endl;
 
    }
}