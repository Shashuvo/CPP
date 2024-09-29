 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    int t;
    cin>>t;
    while(t--){
        int n;
        long long sum=0,cnt=0; 
        cin >> n;
        vector<long long>a(n); 
        for(int i=0;i<n;i++){
            cin>>a[i];
        } 
        set<long long>st;
        for(int i = 0; i < n; i++)
        {
            sum+=a[i];
            st.insert(a[i]);
            if(sum % 2 == 0)
            {
                if(st.count(sum / 2)){
                    cnt++;
                }
            }
        } 
        cout<<cnt<<endl;    
    }
 }