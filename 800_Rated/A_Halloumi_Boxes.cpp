#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;
        bool is=true;
        vector<int>vec(n,0);
        cin>>vec[0];
        for(int i=1;i<n;i++){
            cin>>vec[i];
            if(vec[i-1]>vec[i]){
                is=false;
            }
        }
        if(!is && k==1){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    return 0;
}