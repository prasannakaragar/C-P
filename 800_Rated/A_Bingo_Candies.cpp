#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
        unordered_map<int,int>m;
        int n;
        cin>>n;
        for(int i=0;i<n*n;i++){
            int k;
            cin>>k;
            m[k]++;
        }
        bool is=true;
        for(auto p:m){
            if(p.second >(n*n)-n){
                cout<<"NO\n";
                is=false;
                break;
            }
        }
        if(is){
            cout<<"YES\n";
        }

    }
    return 0;
}