#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
      int n,a;
      cin>>n>>a;
      vector<int>vec(n,0);
      vector<int>psum(n,0);
      long long sum=0;
      
      for(int i=0;i<n;i++) cin>>vec[i];
      for(int i=0;i<n;i++){
        sum+=vec[i];
        psum[i]=sum;
      }
      for(int i=0;i<a;i++){
        int l,r,k;
        long long curr=psum[n-1];
        cin>>l>>r>>k;
        long long size=r-l+1;
        if(l==1){
            if((curr-psum[r-1]+size*k)%2){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else{
            if((curr-psum[r-1]+psum[l-2]+size*k)%2){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
      }
    }
    
    return 0;
}