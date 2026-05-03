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
       bool is=false;
       for(int i=0;i<n;i++){
          cin>>vec[i];
          if(vec[i]!=0){
            is=true;
          }
       }
       int i=0,j=1;
       int cnt=0;
       if(!is){
        cout<<0<<"\n";
        continue;
       }
       while(j<vec.size()){
           
           if(vec[j]==0 && vec[i]==0){
            cnt++;
           }
           j++;
       }
       if(cnt==0){
        cout<<1<<"\n";
        continue;
       }
       cout<<cnt<<"\n";
    }
    
    return 0;
}