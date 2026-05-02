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
       vector<int>vec;
       int l=1,r=3*n;
       for(int i=0;i<n;i++){
        vec.push_back(l);
        vec.push_back(r-1);
        vec.push_back(r);
        l++,r-=2;
       }
       for(int i=0;i<3*n;i++){
            cout<<vec[i]<<" ";
       }
       cout<<"\n";
    }
    
    return 0;
}
