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
      vector<int>vec(n,0);
      for(int i=0;i<n;i++){
        cin>>vec[i];
      }
      sort(vec.begin(),vec.end(),greater<int>());
      long long a=0,b=0;
      for(int i=0;i<n;i++){
        if(i%2 == 0){
          if(vec[i]%2 == 0){
            a+=vec[i];
          }
        }else{
          if(vec[i]%2 != 0){
            b+=vec[i];
          }
        }
      }

      if(a>b){
        cout<<"Alice\n";
      }else if(b>a){
        cout<<"Bob\n";
      }else{
        cout<<"Tie\n";
      }
    }

  return 0;
}