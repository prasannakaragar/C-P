#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
      int n,x,y;
        cin>>n>>x>>y;
        vector<int>vec(n,0);
        long long tsum = 0;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            tsum+=(vec[i]/x);
        }
        long long ans=0;
        for(int i=0;i<n;i++){
            long long k = vec[i]+(tsum - (vec[i]/x))*y;
            ans=max(ans,k);
        }
        
        cout<<ans<<"\n";
     
    }
    
    return 0;
}