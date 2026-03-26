#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if(n==a && n==b){
            cout<<"Yes\n";
            continue;
        }
        if(a+b <= n-2){
            cout<<"Yes\n";
            continue;
        }
        if(a+b>=n-1){
            cout<<"No\n";
            continue;
        }

    }

    return 0;
}