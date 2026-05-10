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
       bool is=true;
       for(int i=0;i<n-1;i++){
            if(vec[i]<=vec[i+1]){
                is=false;
            }
       }
       if(is){
        cout<<"NO\n";
       }else{
        cout<<"YES\n";
       }

    }
    

    return 0;
}