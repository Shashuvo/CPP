#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,count=0;
        cin >> n;
        int h[n];
        for (int i = 0; i < n ; ++i) {
            cin>>h[i];
            if(h[i]==1){
                count++;
            }
        }
        cout<<n-(count/2)<<endl;
    }

    return 0;
}