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
      vector<long long>vec(n,0);
      long long count=0;
      long long mini=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            mini=min(mini,vec[i]);   
        }
        for(int i=0;i<n;i++){
            count+=(vec[i]-mini);
        }
        cout<<count<<"\n";
    }
    
    return 0;
}