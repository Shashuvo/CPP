#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n; //2230
    vector <int> v;
    v.push_back(n); 
    v.push_back(n/10);
    v.push_back(n%10+(n/100)*10);
    sort(v.begin(),v.end());
    cout << v[v.size()-1] << endl;
    return 0;
}