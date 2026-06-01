#include<bits/stdc++.h>
using namespace std;

#define endl '\n'   

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
        int n,q;
        cin>>n>>q;
        vector<int>v(n,0);
        for(int &x:v) cin>>x;
        vector<int>pref(n,0);
        while(q--){
            int l,r;
            cin>>l>>r;
            l--,r--;
            pref[l]+=1;
          if(r+1<n){
            pref[r+1]-=1;
          }
        }
        for(int i=1;i<n;i++){
          pref[i]+=pref[i-1];
        }
    sort(v.begin(),v.end(),greater<int>());
    sort(pref.begin(),pref.end(),greater<int>());
      long long sum = 0;
    for(int i = 0; i < n; i++){
      sum += 1LL * v[i] * pref[i];
    }
      cout<<sum<<endl;
    
    return 0;
}