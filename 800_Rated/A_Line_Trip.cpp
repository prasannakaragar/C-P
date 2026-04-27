#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>vec(n,0);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        int ans=2*(x-vec[vec.size()-1]);
        ans=max(ans,vec[0]);
        for(int i=1;i<vec.size();i++){
            ans=max(ans,vec[i]-vec[i-1]);
        }
        cout<<ans<<"\n";
    }
    
    return 0;
}