#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    unordered_map<string,int>m;
    while(t--){
      string curr;
      cin>>curr;
      if(!m.count(curr)){
        m[curr]++;
        cout<<"OK\n";
      }else{
        cout<<curr<<m[curr]<<"\n";
        m[curr]++;
      }
    }
    
    return 0;
}