#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n; 
        cin >> n;
        vector<int>v2(n), v;

        for(int i = 0; i < n; i++) cin >> v2[i];

        for(int i = 0; i < n-1; i++)
        {
            int maxi = max(v2[i], v2[i+1]);
            v.push_back(maxi);
        }
        sort(v.begin(),v.end());
        cout << v[0] - 1 << endl;
    }
}