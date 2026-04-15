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
      string curr;
      cin>>curr;
      int i=0,j=n-1;
      while(i<j){
        if((curr[i]=='0' && curr[j]=='1')||(curr[i]=='1' && curr[j]=='0')){
            i++,j--;
        }else{
            break;
        }
      }
      cout<<(j-i+1)<<"\n";
    }
    
    return 0;
}