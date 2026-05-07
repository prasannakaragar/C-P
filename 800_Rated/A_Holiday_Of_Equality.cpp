#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    vector<int>vec(n,0);
    int maxi=INT_MIN;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        maxi=max(maxi,vec[i]);
    }
    for(int i=0;i<n;i++){
        ans+=abs(maxi-vec[i]);
    }
    cout<<ans<<"\n";
    return 0;
}