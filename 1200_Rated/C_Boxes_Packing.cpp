#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    unordered_map<int,int>m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        m[k]++;
    }
    int ans=INT_MIN;
    for(auto p:m){
        ans=max(ans,p.second);
    }
    cout<<ans<<"\n";
    return 0;
}