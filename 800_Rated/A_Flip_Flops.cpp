#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        long long n,c,k;
        cin>>n>>c>>k;
        vector<long long>vec(n);
        for(int i=0;i<n;i++) cin>>vec[i];
        
        sort(vec.begin(), vec.end());
        
        for(int i=0;i<n;i++){
            if(vec[i]<=c){
                long long usable = min(k, c - vec[i]);
                c += vec[i] + usable;
                k -= usable;
            }
        }
        cout<<c<<"\n";
    }
    
    return 0;
}