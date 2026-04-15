#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    
      int n;
      cin>>n;
      vector<long long>vec(n,0);
      for(int i=0;i<n;i++) cin>>vec[i];
      vector<long long>pref(n,0);
      vector<long long>spref(n,0);
      long long sum=0;
      for(int i=0;i<n;i++){
        sum+=vec[i];
        pref[i]=sum;
      }
      sum=0;
      sort(vec.begin(),vec.end());
      for(int i=0;i<n;i++){
        sum+=vec[i];
        spref[i]=sum;
      }
      int m;
      cin>>m;
      while(m--){
        int k,i,j;
        cin>>k>>i>>j;
        if(k == 1){
            if(i == 1) cout << pref[j-1] << "\n";
            else cout << pref[j-1] - pref[i-2] << "\n";
        }
        else{
            if(i == 1) cout << spref[j-1] << "\n";
            else cout << spref[j-1] - spref[i-2] << "\n";
        }
      }
    
    
    return 0;
}