#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
      int n,k;
      cin>>n>>k;
      
      vector<int>vec(n,0);
      unordered_map<int,int>m;
      for(int i=0;i<n;i++){
          cin>>vec[i];
          if(vec[i]==k){
            m[k]++;
          }
      }
      if(m[k]>=1){
        cout<<"YES\n";
      }else{
        cout<<"NO\n";
      }
    }
    
    return 0;
}