#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n,0);
        for(int &x:v) cin>>x;
        sort(v.begin(),v.end());
        long long sum=0;
        sum = v[n-1]+v[n-2]-v[0]-v[1];
        cout<<sum<<"\n";
    }
    
    return 0;
}