#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
   int n,q;
   cin>>n>>q;
   vector<long long>vec(n,0);
   vector<long long>pos(n,0);
   vector<long long>ans(n,0);
   for(int i=0;i<n;i++){
     cin>>vec[i];
   }
   while(q--){
    int l,r;
    cin>>l>>r;
    l--,r--;
    if(r<n-1){
      pos[l]++,pos[r+1]--;
    }else{
        pos[l]++;
    }
    
   }
   ans[0]=pos[0];
   for(int i=1;i<n;i++){
      ans[i]=(pos[i]+ans[i-1]);
   }
   sort(vec.begin(),vec.end());
   sort(ans.begin(),ans.end());
   long long sum=0;
   for(int i=n-1;i>=0;i--){
    sum+=(vec[i]*ans[i]);
   }
   cout<<sum<<"\n";
    return 0;
}