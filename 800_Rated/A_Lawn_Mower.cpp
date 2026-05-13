#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
      long long n,m;
      cin>>n>>m;
      cout<<n - (n/m)<<"\n";
    }
    
    return 0;
}