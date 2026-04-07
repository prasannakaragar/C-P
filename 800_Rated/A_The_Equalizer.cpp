#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>vec(n,0);
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            sum+=vec[i];
        }
        if(sum % 2 == 1 || ((n * k)+1) % 2 == 1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        
        
    }
    
    return 0;
}