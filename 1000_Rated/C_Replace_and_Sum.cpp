#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>v1(n,0);
        vector<int>v2(n,0);
        for(int i=0;i<n;i++){
            cin>>v1[i];
        }
        for(int i=0;i<n;i++){
            cin>>v2[i];
        }

        for(int i = n-1; i >= 0; i--){
            v1[i] = max(v1[i], v2[i]);
            if(i+1 < n){
                v1[i] = max(v1[i], v1[i+1]);
            }
        }
        vector<int>vec(n,0);
        vec[0]=v1[0];
        for(int i=1;i<n;i++){
            vec[i]=v1[i]+vec[i-1];
        }

        while(q--){
            int l,r;
            cin>>l>>r;
            l--,r--;
            if(l!=0){
                cout<<vec[r]-vec[l-1]<<" ";
            }else{
                cout<<vec[r]<<" ";
            }

        }
        cout<<"\n";
    }
    
    return 0;
}