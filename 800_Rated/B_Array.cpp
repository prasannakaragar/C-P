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
      vector<int>ans(n,0);
      for(int i=0;i<n-1;i++){
          int count1=0;
          int count2=0;
          for(int j=i+1;j<n;j++){
            if(vec[i]>vec[j]){
                count1++;
            }else if(vec[i]<vec[j]){
                count2++;
            }

          }
          ans[i]=max(count1,count2);
      }
      for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
      }
      cout<<"\n";
    }
    
    
    return 0;
}