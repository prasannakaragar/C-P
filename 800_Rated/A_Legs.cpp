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
        int cnt1=n/4;
        n-=cnt1*4;
        cout<<cnt1+(n/2)<<"\n";
    }
    
    return 0;
}