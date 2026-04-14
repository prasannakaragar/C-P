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
       cin>>vec[0];
       int maxi=vec[0];
       for(int i=1;i<n;i++){
        cin>>vec[i];
        if(maxi<vec[i]){
            maxi=vec[i];
        }
       }
       for(int i=0;i<n;i++){
           cout<<(maxi+1-vec[i])<<" ";
       }
       cout<<"\n";
    }
    
    return 0;
}