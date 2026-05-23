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
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        
        int ans = 0;
    
        for(int j=0;j<n;j++){
            int x = -v[j];
            vector<int>pos;
            for(int i=0;i<n;i++){
                if(v[i]+x >= 0){
                    pos.push_back(v[i]+x);
                }
            }
            set<int>s(pos.begin(),pos.end());
            vector<int>v1(s.begin(),s.end());
            int i=0;
            for(i=0;i<(int)v1.size();i++){
                if(v1[i] != i){
                    break;
                }
            }
            ans = max(ans, i);
        }
        
        cout<<ans<<"\n";
    }
    
    return 0;
}